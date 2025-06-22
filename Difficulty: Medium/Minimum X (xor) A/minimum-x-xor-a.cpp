// User function Template for C++

class Solution {
  public:
    int minVal(int a, int b) {
        
        int setBits = 0;
        int temp = b;
        while (temp > 0) {
            if (temp & 1) setBits++;
            temp = temp >> 1;
        }

        int x = 0;

        
        for (int i = 31; i >= 0 && setBits > 0; i--) {
            if ((a >> i) & 1) {
                x |= (1 << i);
                setBits--;
            }
        }

        for (int i = 0; i <= 31 && setBits > 0; i++) {
            if (((x >> i) & 1) == 0) {
                x |= (1 << i);
                setBits--;
            }
        }

        return x;
    }
};
