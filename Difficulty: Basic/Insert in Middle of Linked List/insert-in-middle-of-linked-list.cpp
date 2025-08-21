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

// Function to insert a node in the middle of the linked list.
class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
        // Code Here
        if(head==NULL){
            return new Node(x);
        }
        
        Node *slow=head;
        Node *fast=head;
        
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
        }
        
        Node *n=new Node(x);
        n->next=slow->next;
        slow->next=n;
        return head;
    }
};