// Last updated: 7/8/2025, 7:15:23 AM
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int s= nums.size();
        int index=-1;
        for(int i=s-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                index=i-1;
                break;
            }
        }
        if(index==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        int min=index+1;
        for(int i=index;i<s;i++){
            if(nums[i]>nums[index] && nums[i]<nums[min]){
                min=i;
            }
        }
        swap(nums[index],nums[min]);
        sort(nums.begin()+index+1,nums.end());
        // return nums;
        
    }
};