/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    void count(int& ans ,Node* root ){
        if(root==nullptr)return;
        if(root->left==nullptr && root->right==nullptr){
            ans++;
            return;
        }
        count(ans,root->left);
        count(ans,root->right);
    }
    int countLeaves(Node* root) {
        // write code here
        int ans = 0 ; 
        count(ans,root);
        return ans;
        
    }
};