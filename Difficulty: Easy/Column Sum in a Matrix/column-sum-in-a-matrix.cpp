//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    vector<int> colSum(vector<vector<int>>& mat) {
        vector<int > ans(mat[0].size());
        for(int i=0;i<mat[0].size();i++){
            int sum=0;
            for(int j=0;j<mat.size();j++){
                sum+=mat[j][i];
            }
            ans[i]=sum;
        }
        return ans;
        
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc-- > 0) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        }
        Solution sln;
        vector<int> ans = sln.colSum(mat);
        for (int i = 0; i < m; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends