// User function Template for C++

/*  Function to calculate the longest consecutive ones
 *   N: given input to calculate the longest consecutive ones
 */
class Solution {
  public:
    int maxConsecutiveOnes(int n) {
        // code here
        int maxi=0,c=0;
        
        for(int i=0;i<32;i++){
            if((n>>i & 1)==0){
                c=0;
            }
            else{
                c++;
            }
            maxi=max(c,maxi);
        }
        return maxi;
    }
};
