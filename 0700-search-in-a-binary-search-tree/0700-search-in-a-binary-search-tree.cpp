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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode * ans=NULL;
        TreeNode * temp=root;
        while(temp){
            if(temp->val==val){
                ans=temp;
                return temp;
            }else{
                if(temp->val<val){
                    temp=temp->right;
                }else{
                    temp=temp->left;
                }
            }
        }
        return ans;
        
    }
};