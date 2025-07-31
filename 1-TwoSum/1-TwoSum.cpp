// Last updated: 8/1/2025, 12:23:45 AM
class Solution {
public:
    int i=0,j=0;
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        for(i=0;i<nums.size();i++)
        {
            for(j=i+1;j<nums.size();j++)
            {
                if(i==j)
                {
                    continue;
                }
                else if(nums[i]+nums[j]==target)
                {
                   v.push_back(i);
                   v.push_back(j);
                   nums.clear();
                   break;
                }
            }
        }
        return v;
    }

};