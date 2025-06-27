// User function Template for C++

class Solution {
  public:
    vector<long long> jugglerSequence(long long n) {
        // code here
        if(n==1){
            return {1};
        }
        vector<long long> a;
        a.push_back(n);
        chang(a);
        return a;
        
        
    }
    void chang(vector<long long> &a){
        
        long long l;
        if(a[a.size()-1]%2==0){
            l=sqrt(a[a.size()-1]);
        }
        else{
            l=sqrt(pow(a[a.size()-1],3));
        }
        
        if(l==1){
            a.push_back(1);
            return ;
        }
        
        a.push_back(l);
        return chang(a);
    }
};