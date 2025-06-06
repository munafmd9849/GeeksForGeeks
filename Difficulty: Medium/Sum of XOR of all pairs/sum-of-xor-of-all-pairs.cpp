

class Solution {
  public:
    // Returns sum of bitwise OR
    // of all pairs
    long long int sumXOR(int arr[], int n) {
        // Complete the function
        long long sum=0;
        for(int i=0;i<32;i++){
            long long set=0;
            for(int j=0;j<n;j++){
                if((arr[j]>>i)&1){
                    set++;
                }
                
            }
            long long unset=n-set;
            sum+=(1<<i)*set*unset;
        }
        return sum;
    }
};