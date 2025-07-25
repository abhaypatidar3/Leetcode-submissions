// Last updated: 7/25/2025, 7:36:02 PM
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_prod=nums[0];
        int min_prod=nums[0];
        int res=nums[0];
        for(int i=1; i<nums.size(); i++){
            int temp = max_prod;
            max_prod = max(nums[i],max(nums[i]*max_prod, nums[i]*min_prod));
            min_prod = min(nums[i],min(nums[i]*temp, nums[i]*min_prod));
            res=max(res,max_prod);
        }
        return res;
    }
};