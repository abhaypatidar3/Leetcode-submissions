// Last updated: 7/29/2025, 2:25:45 AM
class Solution {
private:
    void solve(string &digits,vector<string>&ans,int index,vector<string>modified, string temp)
    {
        if(index>=digits.length())
        {
            ans.push_back(temp);
            return;
        }
        int value=digits[index]-'0';
        string sol=modified[value];
        for(int i=0;i<sol.size();i++)
        {
            temp.push_back(sol[i]);
            solve(digits,ans,index+1,modified,temp);
            temp.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        int index=0;
        string temp = "";
        if(digits.size()==0){
            return ans;
        }
        vector<string>modified={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,ans,index,modified,temp);
        return ans;
        
    }
};