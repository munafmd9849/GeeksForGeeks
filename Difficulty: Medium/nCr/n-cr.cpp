//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    int nCr(int n, int r) {
        if (r > n || r < 0) {
            return 0;
        }
        if (r > n - r) {
            r = n - r;
        }
        long long res = 1;
        for (int i = 1; i <= r; ++i){
            res = res * (n - r + i) / i;
        }
        return int(res);
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r;
        cin >> n >> r;

        Solution ob;
        cout << ob.nCr(n, r) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends