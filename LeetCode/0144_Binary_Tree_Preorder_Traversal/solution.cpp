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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        
        if (root == nullptr) {
            return result;
        }

        vector<TreeNode*> st;
        st.push_back(root);

        while (!st.empty()) {
            TreeNode* curr = st.back();
            st.pop_back();

            result.push_back(curr->val);

            if (curr->right != nullptr) {
                st.push_back(curr->right);
            }

            if (curr->left != nullptr) {
                st.push_back(curr->left);
            }
        }

        return result;
    }
};
