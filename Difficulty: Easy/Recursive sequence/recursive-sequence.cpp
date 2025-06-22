// // User function Template for C++

// class Solution {
//   public:
//     long long mul(int e,int n){
//         if(n==1){
//             return e;
//         }
//         return (e)*mul(e+1,n-1);
//     }
//     long long sequence(int n) {
        
//         // code here
//         if(n==1){
//             return 1;
//         }
        
//         return mul(n,n+1)+sequence(n-1) ;
//     }
// };

class Solution {
  public:
    const int MOD = 1e9 + 7;

    long long sequence(int n) {
        long long res = 0;
        long long num = 1;

        for (int i = 1; i <= n; i++) {
            long long term = 1;
            for (int j = 0; j < i; j++) {
                term = (term * num) % MOD;
                num++;
            }
            res = (res + term) % MOD;
        }

        return res;
    }
};
