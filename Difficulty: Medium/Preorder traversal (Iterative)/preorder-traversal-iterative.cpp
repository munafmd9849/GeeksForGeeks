/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> preOrder(Node* root) {
        // code here
        stack<Node*> st;
        Node*rt=root;
        vector<int> a;
        while(rt!=nullptr || st.size()>0){
            if(rt!=nullptr){
                
                a.push_back(rt->data);
                st.push(rt);
                rt=rt->left;
            }
            else{
                Node* t=st.top();
                st.pop();
                rt=t->right;
            }
        }
        return a;
    }
};