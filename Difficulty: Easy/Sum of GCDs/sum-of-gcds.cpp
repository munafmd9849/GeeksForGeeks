class Solution {
public:
    int eulerTotient(int n) {
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

int sumOfGCDofPairs(int N) {
    int sum = 0;
    for (int i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            int d1 = i;
            int d2 = N / i;
            

            int count1 = eulerTotient(N / d1);
            sum += d1 * count1;
            
       
            if (d1 != d2) {
                int count2 = eulerTotient(N / d2);
                sum += d2 * count2;
            }
        }
    }
    return sum;
}
};