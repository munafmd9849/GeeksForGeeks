// User function template for C++
class Solution {
  public:

    long long sumBitDifferences(int arr[], int n) {
        // code here
        long long sum=0;
        for(int i=0;i<32;i++){
            int set=0;
            for(int j=0;j<n;j++){
                if((arr[j]>>i)&1){
                    set++;
                }
                
            }
            sum+=1LL*set*(n-set)*2;
        }
        return sum;
    }
};