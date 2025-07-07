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
    void sum(int &ans, Node* root) {
        if (root == nullptr) return ;
     if (root->left == nullptr && root->right == nullptr) {
            ans = ans+ root->data;
        }

         sum(ans,root->left) ;
        sum(ans,root->right);
    }

    int leafSum(Node* root) {
        int ans = 0;
        
        sum(ans,root);
        return ans;
    }
};
