// User function Template for C++

class Solution {
  public:
    vector<int> pattern(int n) {
        // code here
        if(n<=0){
            return {n};
        }
        vector<int> a;
        a.push_back(n);
        pat(a,n-5);
        return a;
    }
    int it=-5;
    void pat(vector<int> &a,int n){
        if(n==a[0]){
            a.push_back(a[0]);
            return;
        }
        
        if(n<=0){
            it=5;
        }
        a.push_back(n);
        pat(a,n+it);
        
        
    }
};