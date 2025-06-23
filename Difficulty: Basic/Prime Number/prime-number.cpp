class Solution {
  public:
    bool isPrime(int n) {
        // code here
        for (int i = 2; i*i <= n; i++) {
            if (n % i == 0 && i != n) return false;
        }
        return true;
    }
};
