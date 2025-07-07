/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution {
  public:
    int helper(Node* root) {
        if (root == nullptr) return 0;

        // If this node is a leaf node
        if (root->left == nullptr && root->right == nullptr) {
            return 1;
        }
        return helper(root->left) + helper(root->right);
    }

    int countLeaves(Node* root) {
        return helper(root);
    }
};
