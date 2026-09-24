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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        
        if (root == nullptr) {
            return result;
        }
        vector<TreeNode*> st;
        TreeNode* curr = root;
        
        while (curr != nullptr || !st.empty()) {
            while (curr != nullptr) {
                st.push_back(curr);
                curr = curr->left;
            }

            curr = st.back();
            st.pop_back();
            result.push_back(curr->val);
            
            curr = curr->right;
        }
        
        return result;
    }
};