// User function Template for C++

class Solution {
  public:
    vector<int> recamanSequence(int n) {
        // code here
        vector<int> vt(n, INT_MIN);
        unordered_set<int> s;
        vt[0] = 0;
        s.insert(0);
        
        for(int i = 1; i < n; i++){
            int val = vt[i - 1] - i;
            if(val < 0 || s.find(val) != s.end()){
                val = vt[i - 1] + i;
            }
            s.insert(val);
            vt[i] = val;
        }
        return vt;
    }
};