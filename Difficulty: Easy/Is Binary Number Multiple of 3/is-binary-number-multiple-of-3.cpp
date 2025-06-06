class Solution {
  public:
    bool isDivisible(string& s) {
        int remainder = 0;
        for (char c : s) {
            remainder = (remainder * 2 + (c - '0')) % 3;
        }
        return remainder == 0;
    }
};