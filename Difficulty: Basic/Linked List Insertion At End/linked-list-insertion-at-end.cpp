/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
    
        Node *n=new Node(x);
        if(head==NULL){
            return n;
        }
        Node *t=head;
        while(t->next!=NULL){
            t=t->next;
        }
        t->next=n;
        return head;
        
    }
};