class Solution {
  public:
    int count(int n) {
        // code here
        int ans=1;
        vector<int> a(n+1,2);
        for(int i=2;i<=n;i++){
            for(int j=2;j*i<=n;j++){
                a[i*j]++;
            }
            if(a[i]%2!=0){
                ans++;
            }
            
        }
        return ans;
    }
};