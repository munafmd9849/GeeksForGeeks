// User function Template for C++

class Solution {
  public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n) {
        int result = 0;
        while (n > 0) {
            result ^= n;
            n >>= 1;
        }
        return result;
    }
};
