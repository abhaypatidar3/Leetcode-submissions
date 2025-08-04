// Last updated: 8/4/2025, 2:32:51 PM
class Solution {
public:
    int maxArea(vector<int>& h) {
        int i=0;
        int area=0;
        int j=h.size()-1;
        while(i<j){
            int a1=(j-i)*min(h[i],h[j]);
            area = max(a1,area);
            h[i]>h[j] ? j-- : i++; 
        }
        return area;
    }
};