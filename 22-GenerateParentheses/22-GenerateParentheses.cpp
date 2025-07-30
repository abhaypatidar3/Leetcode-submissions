// Last updated: 7/31/2025, 12:49:15 AM
class Solution {
public:
    void insert(int co, int cc,int n, string temp, vector<string>&ans){
        if(co==cc){
            if(co==n){
                ans.push_back(temp);
            }
            else{
                temp.push_back('(');
                insert(co+1, cc, n, temp, ans);
            }
        }
        else if(co<cc){
            return;
        }
        else if(co>cc && co<=n){
            temp.push_back('(');
            insert(co+1, cc, n, temp, ans);
            temp.pop_back();
            temp.push_back(')');
            insert(co, cc+1, n, temp, ans);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp="";
        int co=0;
        int cc=0;
        insert( co , cc, n, temp, ans);
        return ans;
    }
};