/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, Node* h, int key) {
        // Code here
        Node* t=h;
        while(t!=NULL){
            if(t->data==key){
                return true;
            }
            else{
                t=t->next;
            }
        }
        return false;
    }
};
