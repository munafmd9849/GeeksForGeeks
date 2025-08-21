/*Struture of the node of the linked list is as:

struct Node {
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
// Your task is to complete the function
// function should return the modular Node
// if no such node is present then return -1
class Solution {
  public:
    int modularNode(Node *head, int k) {
        // Code here
        Node* t=head;
        int val=-1;
        int i=1;
        while(t!=NULL){
            if(i%k==0){
                val=t->data;
            }
            i++;
            t=t->next;
        }
        return val;
        
    }
};