// User function Template for C++

class Solution {
  public:
  Node* last = nullptr;
    void flatten(Node *root) {
        // code here
         if(!root) return;
        flatten(root->right);
        flatten(root->left);
        root->right = last;
        root->left = nullptr;
        last = root;
    
    }
};