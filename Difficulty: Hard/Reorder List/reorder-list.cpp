/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
    void reorderList(Node* head) {
        // Your code here
        if(head==nullptr && head->next==nullptr)return ;
        // finding the middleone 
        Node* slow = head;
        Node* fast = head;
        while(fast->next&&fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
            
        }
        // reverse second half
        Node* prev = nullptr;
        Node* curr = slow->next;
        while(curr){
            Node* nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
        }
        slow->next=nullptr;
        Node* first = head;
        Node* second = prev;
        while(second){
            Node* temp1 = first->next;
            Node* temp2 = second->next;
            first->next=second;
            second->next=temp1;
            first=temp1;
            second=temp2;
            
        }
    }
};