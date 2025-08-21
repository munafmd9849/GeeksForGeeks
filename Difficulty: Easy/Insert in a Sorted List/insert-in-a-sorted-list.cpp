/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    // Should return head of the modified linked list
    Node* sortedInsert(Node* head, int key) {
        // Code here
        if(head->data>key){
            Node* n=new Node(key);
            n->next=head;
            return n;
        }
        Node *t=head;
        while(t->next!=NULL){
            if(t->data<=key && t->next->data>key){
                break;
            }
            t=t->next;
        }
        Node *n = new Node(key);
        n->next=t->next;
        t->next=n;
        return head;

    }
};