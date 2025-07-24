// Last updated: 7/24/2025, 5:16:40 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int i=0;
        int j=num.size()-1;
        vector<int>temp;
        while(i<j){
            if((num[i]+num[j])==target){
               
                temp.push_back(i+1);
                temp.push_back(j+1);
                break;
            }
            else if((num[i]+num[j])<target){
                i++;
            }
            else if((num[i]+num[j])>target){
                j--;
            }
        }
        return temp;
    }
};