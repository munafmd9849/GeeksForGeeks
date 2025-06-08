class Solution {
  public:
    long long sumOfDivisors(long long n) {
        // Code here
        vector<int> a(n+1,1);
        for(int i=2;i<=n;i++){
            for(int j=1;i*j<=n;j++){
                a[i*j]+=i;
            }
            // cout<<a[i]<<" ";
        }
        long long sum=0;
        for(int i=1;i<=n;i++){
            sum+=a[i];
        }
        return sum;
    }
};