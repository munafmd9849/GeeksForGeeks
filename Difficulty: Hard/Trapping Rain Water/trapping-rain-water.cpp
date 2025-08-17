class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int> pf(n);
        vector<int> ans(n,0);
        vector<int> sf(n);
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>maxi){
                maxi=arr[i];
            }
            pf[i]=maxi;
            
        }
        maxi=INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(arr[i]>maxi){
                maxi=arr[i];
            }
            sf[i]=maxi;
        }
        for(int i=1;i<n-1;i++){
            int lh=pf[i-1];
            int rh=sf[i+1];
            int minh=min(lh,rh);
            ans[i]=max(minh-arr[i],0);
        }
        int sum=0;
        for(int i:ans){
            sum+=i;
        }
        return sum;
    }
};