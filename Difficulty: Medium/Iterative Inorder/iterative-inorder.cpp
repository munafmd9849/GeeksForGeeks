// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
  public:
    vector<int> inOrder(Node* root) {
        // code here
        stack<Node*> st;
        Node*rt=root;
        vector<int> a;
        while(rt!=nullptr || st.size()>0){
            if(rt!=nullptr){
                st.push(rt);
                rt=rt->left;
            }
            else{
                Node* t=st.top();
                st.pop();
                a.push_back(t->data);
                rt=t->right;
            }
        }
        return a;
    }
};