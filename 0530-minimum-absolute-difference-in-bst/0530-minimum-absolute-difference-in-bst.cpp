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
    void getAns(TreeNode * root, vector<int> &ans){
        if(root==NULL) return;
        getAns(root->left, ans);
        ans.push_back(root->val);
        getAns(root->right, ans);
    }

    int getMinimumDifference(TreeNode* root) {
        vector<int> nodesval;
        getAns(root, nodesval);
        int mini=INT_MAX;
        int n=nodesval.size();
        for(int i=1; i<n; i++){
            int minival=nodesval[i]-nodesval[i-1];
            mini=min(mini, minival);

        }

        return mini;
        
    }
};