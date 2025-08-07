// Last updated: 8/8/2025, 2:01:13 AM
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        else{
            int x1=x;
            long long int x2=0;
            while(x1>0){
                int digit=x1%10;
                x2=x2*10 + digit;
                x1/=10;
            }
            if(x==x2){
                return true;

            }
            return false;
        }
    }
};