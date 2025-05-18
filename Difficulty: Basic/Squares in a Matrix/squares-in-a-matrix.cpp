//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int squaresInMatrix(int m, int n) {
        int total=0;
        for(int i=1;i<=min(n,m);i++){
            total+=(m-i+1)*(n-i+1);
        }
        return total;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n;

        cin >> m >> n;

        Solution ob;
        cout << ob.squaresInMatrix(m, n) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends