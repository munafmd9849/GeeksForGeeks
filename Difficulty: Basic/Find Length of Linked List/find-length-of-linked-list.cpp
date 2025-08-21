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
    int getCount(Node* head) {
        // Code here
        
        int c=0;
        Node * t=head;
        while(t!=NULL){
            c++;
            t=t->next;
        }
        return c;
    }
};