/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Function to return a list containing the level order traversal in spiral form.
class Solution {
  public:
  int helper(Node* root){
      if(root==nullptr){
          return 0;
      }
      return root->data + helper(root->left) + helper(root->right);
      
  }
    int sumBT(Node* root) {
        // code here
       
        return helper(root);
         
    }
};