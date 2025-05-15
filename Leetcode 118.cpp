#include<vector>
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;  // answer i am gonna return
        vector<int>temp;        // single single arrays that i will push in ans vector
        temp.push_back(1);
        ans.push_back(temp);
        if(numRows==1)
        {
            return ans;
        }
        else{
            vector<int>vect1={1,1};
            ans.push_back(vect1);
            vector<int>vect2;
            int prev=0, next;
            for(int j=2;j<numRows;j++)
            {
                prev=0;
                for(int i=0;i<vect1.size();i++)
                {
                next=vect1[i];
                vect2.push_back(prev + next);
                prev = next;
                }
                vect2.push_back(1);
                vect1.clear();
                vect1=vect2;
                ans.push_back(vect2);
                vect2.clear();
            }
        }
        return ans;
         
    }
};
