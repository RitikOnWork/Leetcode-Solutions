/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    vector<int> levelOrder(Node *root) {
        vector<int> ans;

        if (root == nullptr)
            return ans;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            Node* fnode = q.front();
            q.pop();

            ans.push_back(fnode->data);

            if (fnode->left)
                q.push(fnode->left);

            if (fnode->right)
                q.push(fnode->right);
        }

        return ans;
    }
};
