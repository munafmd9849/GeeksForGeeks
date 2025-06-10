/*Function to count subset with even sum
 * arr : array input
 * N : size of array
 */
class Solution {
  public:
    int countSumSubsets(int arr[], int n) {

        // Your code here
        int count=0;
        for(int i=1;i<(1<<n);i++){
            long long int sum=0;
            for(int j=0;j<n;j++){
                if((i>>j)&1){
                    sum+=arr[j];
                }
            }
            if((sum&1)==0){
                count++;
            }
        }
        return count;
        
        
    }
};