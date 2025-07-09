// Tree Node
// class Node {
//   public:
//     int data;
//     Node* left;
//     Node* right;

//     // Constructor to initialize a new node
//     Node(int val) {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };

class Solution {
  public:
    bool isLeaf(Node *node) {
        return node->left == nullptr && node->right == nullptr;
    }

    void leaf(Node* root, vector<int>& ans) { // Collect all leaf nodes
        if (root == nullptr) return;
        if (isLeaf(root)) {
            ans.push_back(root->data);
            return;
        }
        leaf(root->left, ans);
        leaf(root->right, ans);
    }

    void leftleaf(Node* root, vector<int>& ans) { // Collect left boundary (top-down, excluding leaves)
        if (root == nullptr || isLeaf(root)) return;

        ans.push_back(root->data);
        if (root->left) {
            leftleaf(root->left, ans);
        } else {
            leftleaf(root->right, ans);
        }
    }

    void rightleaf(Node* root, vector<int>& ans) { // Collect right boundary (bottom-up, excluding leaves)
        if (root == nullptr || isLeaf(root)) return;

        if (root->right) {
            rightleaf(root->right, ans);
        } else {
            rightleaf(root->left, ans);
        }

        ans.push_back(root->data); // Add after recursion for reverse order
    }

    vector<int> boundaryTraversal(Node *root) {
        vector<int> ans;
        if (root == nullptr) return ans;

        if (!isLeaf(root)) ans.push_back(root->data);   // Step 1: Add root if not a leaf

        leftleaf(root->left, ans);                      // Step 2: Add left boundary
        leaf(root, ans);                                // Step 3: Add all leaf nodes
        rightleaf(root->right, ans);                    // Step 4: Add right boundary

        return ans;
    }
};
