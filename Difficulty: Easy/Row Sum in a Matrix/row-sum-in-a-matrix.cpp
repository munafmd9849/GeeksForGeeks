//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    vector<int> rowSum(vector<vector<int>>& mat) {
        vector<int> ans(mat.size());
        for(int i=0;i<mat.size();i++){
            int sum=0;
            for(int j=0;j<mat[0].size();j++){
                sum+=mat[i][j];
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
        vector<int> ans = sln.rowSum(mat);
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends