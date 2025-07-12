// Last updated: 7/12/2025, 11:27:56 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //     int sum=INT_MIN;
        //     for(int j=i;j<nums.size();j++){
        //         if(j==i && nums[j]>sum){
        //             sum=nums[j];
        //             if(sum>res){
        //                 res=sum;
        //             }
        //         }
        //         else{
        //             sum += nums[j];
        //             if(sum>res){
        //                 res=sum;
        //             }
        //         }
               
        //     }
        //     // if(sum>res){
        //     //     res=sum;
        //     // }
        // }


        //kadane's algorithm of maintaining a max and currsum till end of the array, and if currsum<0 we make it to 0 and then count from next element and if currsum>max then allocate currsum to it 
            long long int max = INT_MIN;
            long long int currsum=0;
        for(int i=0;i<nums.size();i++){
            if(currsum<0){
                currsum=0;
            }
            currsum += nums[i];
            if(currsum>max){
                max=currsum;
            }
        }


        return max;
    }
};