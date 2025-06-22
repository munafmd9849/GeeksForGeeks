class Solution {
  public:

    int computeGCD(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    int gcd(int n, vector<int> arr) {
        int result = arr[0];
        for (int i = 1; i < n; i++) {
            result = computeGCD(result, arr[i]);
        }
        return result;
    }
};
