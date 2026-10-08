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
    TreeNode* searchBST(TreeNode* root, int target) {
        if(!root) return NULL;
        if(root->val == target) return root;

        TreeNode* found = NULL;

        if(target<root->val){
            found = searchBST(root->left, target);
        }
        if(target>root->val){
            found = searchBST(root->right, target);
        }
        return found;
    }
};
