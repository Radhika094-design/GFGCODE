/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        Node* slow = head;
        Node* fast = head;
     
        while(fast!=nullptr&&fast->next!= nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                int count = 1;
               // Node* temp = slow;
               slow = slow->next;
               // while(temp->next!=slow){
               while(slow!=fast){
                 // temp =   temp->next;
                  count++;
                  slow= slow->next;
                }
                return count;
            }
        }
    
    return 0;
    }
};