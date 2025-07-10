// Last updated: 7/10/2025, 11:10:16 PM
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        sort(inter.begin(),inter.end());
        vector<vector<int>>ans;
        ans.push_back(inter[0]);
        for(int i=1;i<inter.size();i++){
            vector<int>&temp = ans.back();
            if(temp[1]>=inter[i][0]){
                temp[1]=max(temp[1],inter[i][1]);
            }
            else{
                ans.push_back(inter[i]);
            }
        }
        return ans;
    }
};