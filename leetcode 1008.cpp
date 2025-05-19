/**
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
/**
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

 // without mini variable
class Solution {
public:
    TreeNode* built(vector<int>& pre, int max, int &i){
        if(i>=pre.size()){
            return NULL;
        }
        if(pre[i]>max){
            return NULL;
        }
        TreeNode* temp = new TreeNode(pre[i++]);
        temp->left = built(pre, temp->val, i);
        temp->right = built(pre, max, i);
        return temp;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        TreeNode* root=built(preorder, INT_MAX, i);
        return root;
    }
};


// with mini variable


// class Solution {
// public:
//     TreeNode* built(vector<int>& pre, int min, int max, int &i){
//         if(i>=pre.size()){
//             return NULL;
//         }
//         if(pre[i]<min || pre[i]>max){
//             return NULL;
//         }
//         TreeNode* temp = new TreeNode(pre[i++]);
//         temp->left = built(pre, min, temp->val, i);
//         temp->right = built(pre, temp->val, max, i);
//         return temp;
//     }
//     TreeNode* bstFromPreorder(vector<int>& preorder) {
//         int i=0;
//         TreeNode* root=built(preorder,INT_MIN, INT_MAX, i);
//         return root;
//     }
// };
