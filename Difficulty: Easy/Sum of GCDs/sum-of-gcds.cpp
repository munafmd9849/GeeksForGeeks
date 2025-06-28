class Solution {
  public:
    int phi(int n) {
        int result = n;
        for (int p = 2; p * p <= n; ++p) {
            if (n % p == 0) {
                while (n % p == 0)
                    n /= p;
                result -= result / p;
            }
        }
        if (n > 1)
            result -= result / n;
        return result;
    }

    long long int sumOfGCDofPairs(int N) {
        long long sum = 0;
        for (int d = 1; d * d <= N; d++) {
            if (N % d == 0) {
                int div1 = d;
                int div2 = N / d;

                sum += 1LL * div1 * phi(N / div1);
                if (div1 != div2) {
                    sum += 1LL * div2 * phi(N / div2);
                }
            }
        }
        return sum;
    }
};
