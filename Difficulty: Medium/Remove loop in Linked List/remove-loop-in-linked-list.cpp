/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        // code here
        if(head->next==nullptr){
            return ;
        }
        Node* fast=head;
        Node* slow=head;
        int flag=0;
        while(fast!=nullptr && fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
            
            if(fast==slow){
                flag=1;
                break;
            }
        }
        if(flag==0){
            return ;
        }
        slow=head;
        if(slow==fast){
            while(fast->next!=slow){
                fast=fast->next;
                
            }
            fast->next=nullptr;
            return ;
        }
        else{
            while(slow->next!=fast->next){
                fast=fast->next;
                slow=slow->next;
            }
        }
        
        fast->next=nullptr;
        return;
    
    }
};