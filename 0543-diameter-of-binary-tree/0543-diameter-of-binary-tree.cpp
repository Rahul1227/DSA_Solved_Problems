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
    int maxi=0;
    int getHeight(TreeNode *node){
        if(node==NULL){
            return 0;
        }
        int lh=getHeight(node->left);
        int rh=getHeight(node->right);
        return 1+ max(lh, rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if (root==NULL) return 0;

        int leftheight=getHeight(root->left);
        int rightheight=getHeight(root->right);
        maxi=max(maxi, leftheight+rightheight);

        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);

        return maxi;



        
    }
};