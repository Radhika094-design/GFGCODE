/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int height(Node* node) {
        // code here
  
        if (node == nullptr) return -1;

        int leftDepth = height(node->left);
        int rightDepth = height(node->right);

        return 1 + max(leftDepth, rightDepth);
    

    }
};