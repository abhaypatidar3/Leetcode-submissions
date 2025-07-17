// Last updated: 7/17/2025, 7:41:12 PM
class Solution {
public:
    string multi(string num, char ch){
        string ans = "";
        int digit = ch - '0';
        int carry=0,rem;
        for(int i = num.size()-1; i>=0; i--){
            int temp = num[i] - '0';
            rem = (temp*digit + carry) % 10;
            ans.push_back(rem + '0');
            carry = (temp*digit + carry) / 10;
        }
        if(carry!=0){
            ans.push_back(carry + '0');
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }

    string add(string num1, string num2){
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int i=0,j=0;
        int carry=0;
        while(i<num1.size() && j<num2.size()){
            int dig1 = num1[i] - '0'; 
            int dig2 = num2[i] - '0'; 
            char rem = ((dig1 + dig2 + carry)%10) + '0';
            carry = (dig1 + dig2 + carry)/10;
            num1[i]=rem;
            i++;
            j++;
        }
        while(i<num1.size()){
            int dig1 = num1[i] - '0';
            char rem = ((dig1 + carry)%10) + '0';
            carry = (dig1 + carry) / 10;
            num1[i]=rem;
            i++;
        }
        if(carry!=0){
            num1.push_back(carry + '0');
        }
        reverse(num1.begin(), num1.end());
        return num1;
    }
    string multiply(string num1, string num2) {
        int n1 = num1.size();
        int n2 = num2.size();
        if(num1=="0" || num2 == "0"){
            return "0";
        }
        string ans = multi(num1,num2[n2-1]);
        int zerocount=1;
        for(int i=n2-2; i>=0; i--){
            string temp = multi(num1,num2[i]);
            for(int j=0;j<zerocount;j++){
                temp.push_back('0');
            }
            if(temp.size()>ans.size()){
              ans = add(temp,ans);  
            }
            else{
            ans = add(ans,temp);
                
            }
            zerocount++;
        }
        return ans;
    }
};