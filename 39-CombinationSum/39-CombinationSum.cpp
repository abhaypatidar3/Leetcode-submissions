// Last updated: 7/26/2025, 5:50:53 PM
class Solution {
public:
    void solve(vector<int>&c, int target, vector<vector<int>>&ans, int i,int sum,vector<int>temp)
    {
        if(i==c.size()){
            return ;
        }
        if(sum>target)
        {
            return;
        }
        // else if(sum==target)
        // {
        //     ans.push_back(temp);
        //     return;
        // }
        else
        {
           temp.push_back(c[i]);
           sum+=c[i];
           if(sum==target)
            {
            ans.push_back(temp);
            return;
            }
           if(sum<target){
                solve(c,target,ans,i,sum,temp);
                i++;
                while(i<c.size()){
                 solve(c,target,ans,i++,sum,temp);
                }
           }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& c, int target) {
        vector<vector<int>> ans;
        // int i=0;
        int sum=0;
        vector<int>temp;
        for(int i=0;i<c.size();i++){
         solve(c,target,ans,i,sum,temp);

        }
        return ans;
    }
};