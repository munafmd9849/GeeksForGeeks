/*

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    bool areIdentical(Node *head1, Node *head2) {
        // code here
        Node *t1=head1;
        Node *t2=head2;
        while(t1!=NULL && t2!=NULL){
            if(t1->data!=t2->data){
                return false;
            }
            t1=t1->next;
            t2=t2->next;
        }
        if(t1==NULL && t2==NULL)
            return true;
        else
        return false;
    }
};