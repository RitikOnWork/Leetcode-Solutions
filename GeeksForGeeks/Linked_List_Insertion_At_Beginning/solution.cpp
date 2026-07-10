/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node *insertAtFront(Node *head, int x) {
        // 1. Create a new node with the value x
        Node *newNode = new Node(x);
        
        // 2. Point the new node's next to the current head
        newNode->next = head;
        
        // 3. The new node is now the first node, so return it
        return newNode;
    }
};