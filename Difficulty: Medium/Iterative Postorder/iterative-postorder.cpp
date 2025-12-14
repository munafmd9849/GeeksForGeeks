// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
  public:
    vector<int> postOrder(Node* node) {
        // code here
        stack<Node*> st;
        Node*rt=node;
        vector<int> a;
        Node* lastVisited=nullptr;
        while(rt!=nullptr || st.size()>0){
            if(rt!=nullptr){
                st.push(rt);
                rt=rt->left;
            }
            else{
                
                Node* t=st.top();
                if(t->right && lastVisited!=t->right){
                    rt=t->right;
                }
                else{
                    a.push_back(t->data);
                    lastVisited=t;
                    st.pop();
                }
            }
        }
        return a;
    }
};