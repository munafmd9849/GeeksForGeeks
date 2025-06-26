// User function Template for C++

class Solution {
  public:
  
    vector<int> pattern(int N) {
        // code here
        vector<int> ans;
        pat(N,ans);
        return ans;
        
    }
    void pat(int n,vector<int> &a){
        
        if(n<=0){
            a.push_back(n);
            return ;
        }
        a.push_back(n);
        pat(n-5,a);
        a.push_back(n);
    }
};