// User function template for C++

class Solution {
  public:
    long long pairAndSum(int n, long long arr[]) {
        // code here
        long long sum=0;
        for(int i=0;i<32;i++){
            long long set=0;
            
            for(int j=0;j<n;j++){
                if((arr[j]>>i)&1){
                    set++;
                }
            }
            long long pairs = (set * (set - 1)) / 2;
            sum += pairs * (1LL << i);
            
        }
        return sum;
    }
};