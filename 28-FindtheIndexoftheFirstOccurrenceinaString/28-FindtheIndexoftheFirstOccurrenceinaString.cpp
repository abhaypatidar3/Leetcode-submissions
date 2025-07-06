// Last updated: 7/6/2025, 11:49:02 PM
class Solution {
public:
   
    int strStr(string hs, string n) {
        if(hs.size()<n.size()){
            return -1;
        }
        for(int i=0;i<hs.size()-n.size()+1;i++){
            string s1=hs.substr(i,n.size());
            if(s1==n){
                return i;
            }
        }
        return -1;
    }
};