// Last updated: 7/9/2025, 11:39:18 PM
class Solution {
public:
    int search(vector<int>& a, int target) {
        int i=0;
        int j = a.size()-1;
        int mid=0;
        int low = 0;
        int high = a.size();
        while(i<=j){
            int mid = (i+j)/2;
            if(a[mid]==target){
                return mid;
            }
            else{
                if(a[mid]<=a[j]){
                    if((a[mid]<target && a[j]>=target)){
                        i=mid+1;
                    }
                    else{
                        j=mid-1;
                    }
                }
                else if(a[mid]>=a[i]){
                    if((a[mid]>target && a[i]<=target)){
                        j=mid-1;
                    }
                    else{
                        i=mid+1;
                    }
                }
                
            }
        }
        return -1;
    }
};