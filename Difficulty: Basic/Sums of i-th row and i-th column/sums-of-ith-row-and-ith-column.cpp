//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int sumOfRowCol(int n, int m, vector<vector<int>> a) {
        vector<int> pfc(min(n,m),0);
        vector<int> pfr(min(n,m),0);
        for(int i=0;i<min(n,m);i++){
            for(int j=0;j<m;j++){
                pfr[i]+=a[i][j];
            }
        }
        for(int j=0;j<min(n,m);j++){
            for(int i=0;i<n;i++){
                pfc[j]+=a[i][j];
            }
        }
        if(pfc==pfr){
            return 1;
        }
        else {
            return 0;
        }
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> A[i][j];
        Solution ob;
        cout << ob.sumOfRowCol(N, M, A) << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends