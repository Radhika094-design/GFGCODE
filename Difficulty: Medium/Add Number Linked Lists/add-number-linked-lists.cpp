/* Node structure already given in GFG */
/*struct Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
public:
    // Reverse a linked list
    static Node* reverse(Node* head) {
        Node* prev = nullptr;
        while (head != nullptr) {
            Node* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }

    // Remove leading zeros
    static Node* removeLeadingZeros(Node* head) {
        while (head != nullptr && head->data == 0) {
            head = head->next;
        }
        return (head == nullptr) ? new Node(0) : head;
    }

    // Add two linked lists
    static Node* addTwoLists(Node* num1, Node* num2) {
        num1 = reverse(num1);
        num2 = reverse(num2);

        Node* dummy = new Node(0);
        Node* curr = dummy;
        int carry = 0;

        while (num1 != nullptr || num2 != nullptr || carry != 0) {
            int sum = carry;

            if (num1 != nullptr) {
                sum += num1->data;
                num1 = num1->next;
            }

            if (num2 != nullptr) {
                sum += num2->data;
                num2 = num2->next;
            }

            curr->next = new Node(sum % 10);
            carry = sum / 10;
            curr = curr->next;
        }

        Node* result = reverse(dummy->next);
        return removeLeadingZeros(result);
    }
};
