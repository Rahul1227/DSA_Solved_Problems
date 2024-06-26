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
class Solution {
public: 
    bool isvalidbst(TreeNode * root, long min, long max){
        if(root==NULL){
            return true;
        }

        if(root->val<=min || root->val>=max){
            return false;
        }

        return isvalidbst(root->left,min, root->val) && isvalidbst(root->right, root->val, max);
    }
public:
    bool isValidBST(TreeNode* root) {
        return isvalidbst(root, LONG_MIN, LONG_MAX);
        
    }


};