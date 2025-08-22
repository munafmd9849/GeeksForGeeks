/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {

        // code here
        if(head==NULL || head->next==NULL){
            return head;
        }
        Node *p=head;
        Node *t=head->next;
        while(t!=NULL){
            if(p->data==t->data){
                t=t->next;
                p->next=t;
            }
            else{
                p=p->next;
                t=t->next;
            }
        }
        return head;
    }
};