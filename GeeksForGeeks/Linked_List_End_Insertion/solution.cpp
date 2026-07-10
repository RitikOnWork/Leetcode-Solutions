/*
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // 1. If the list is empty, create the node and make it the head
        if (head == nullptr) {
            return new Node(x);
        }
        
        // 2. Traverse to the last node of the list
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        
        // 3. Create the new node and link it to the end
        Node* newNode = new Node(x);
        temp->next = newNode;
        
        // 4. Return the original head of the list
        return head;
    }
};