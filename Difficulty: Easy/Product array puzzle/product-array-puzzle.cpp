// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int> pf(n,1);
        vector<int> sf(n,1);
        int p=1;
        for(int i=0;i<n;i++){
            p*=arr[i];
            pf[i]=p;
        }
        p=1;
        for(int i=n-1;i>=0;i--){
            p*=arr[i];
            sf[i]=p;
        }
        vector<int> ans(n,1);
        for(int i=1;i<n-1;i++){
            ans[i]*=pf[i-1];
            ans[i]*=sf[i+1];
        }
        ans[0]=sf[1];
        ans[n-1]=pf[n-2];
        return ans;
  
     
    }
};
