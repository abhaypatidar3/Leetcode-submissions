// Last updated: 7/27/2025, 1:17:45 AM
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        int target=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum=nums[i];
            if(sum==k){
                target++;
            }
            for(int j=i+1;j<n;j++){
                sum += nums[j];
                if(sum==k){
                    target++;
                }
            }
        }
        return target;
    }
};