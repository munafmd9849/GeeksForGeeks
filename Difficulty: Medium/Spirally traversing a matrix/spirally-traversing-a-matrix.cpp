//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        int n=mat.size();
        int m=mat[0].size();
        int t=0,b=n-1,l=0,r=m-1,j=0;
        vector<int> ans(n*m);
        
        while(t<=b && l<=r){
            for(int i=l;i<=r;i++){
                ans[j++]=mat[t][i];
            }
        
            for(int i=++t;i<=b;i++){
                ans[j++]=mat[i][r];
            }
            
            for(int i=--r;i>=l && t<=b;i--){
                ans[j++]=mat[b][i];
            }
            for(int i=--b;i>=t && l<=r;i--){
                ans[j++]=mat[i][l];
            }
            l++;
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r);

        for (int i = 0; i < r; i++) {
            matrix[i].assign(c, 0);
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends