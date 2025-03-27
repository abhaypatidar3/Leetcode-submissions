/**
code change
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)
        {
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        bool left2right=true;
        while(!q.empty())
        {
            int size=q.size();
            vector<int>temp(size);
            for(int i=0; i<size; i++)
            {
                TreeNode* frontnode = q.front();
                q.pop();

                int index= left2right? i : size-i-1;
                temp[index] = frontnode->val;

                if(frontnode->left)
                {
                    q.push(frontnode->left);
                }
                if(frontnode->right)
                {
                    q.push(frontnode->right);
                }

            }
            left2right=!left2right;
            ans.push_back(temp);

        }
        return ans;
    }
};
