// User function Template for C++

class Solution {
  public:
    // Function to find position of first set bit in the given number.
    int getFirstSetBit(int n) {
        // Your code here
        int i=0;
        for(;i<32;i++){
            if(n>>i&1){
                return i+1;
            }
        }
        return 0;
    }
};