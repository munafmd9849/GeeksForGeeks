class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char> st;
        for(char c :s){
            if(st.size()==0 || c=='{' || c=='(' || c=='['){
                st.push(c);
            }
            else{
                if(st.top()=='{' && c=='}' ||
                   st.top()=='[' && c==']' ||
                   st.top()=='(' && c==')')
                {
                    st.pop();
                }
                else{
                    return false; 
                }
                  
            }
        }
        return st.size()>0?false:true;
    }
};