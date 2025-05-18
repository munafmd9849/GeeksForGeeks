//{ Driver Code Starts
// Initial Template for C++
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    static string magicSquare(vector<vector<int>>& a) {
        int n=a.size();
        long sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                sum+=a[i][j];
            }
        }
        long dissum=0;
        for(int i=1;i<=n*n;i++){
            dissum+=i;
        }
        if(dissum!=sum){
            return "Not a Magic Square";
        }
        int equal;
        for(int i=0;i<n;i++){
            int rcount=0;
            for(int j=0;j<n;j++){
                rcount+=a[i][j];
            }
            if(i==0){
                equal=rcount;
            }
            if(rcount!=equal){
                return "Not a Magic Square";
            }
        }
        
        
        for(int j=0;j<n;j++){
            int ccount=0;
            for(int i=0;i<n;i++){
                ccount+=a[i][j];
            }
            if(equal!=ccount){
                return "Not a Magic Square";
            }
        }
        
        
        int dcount=0;
        for(int i=0;i<n;i++){
            dcount+=a[i][i];
        }
        if(dcount!=equal){
            return "Not a Magic Square";
        }
        
        
        dcount=0;
        for(int i=0;i<n;i++){
            dcount+=a[i][n-i-1];
        }
        if(dcount!=equal){
            return "Not a Magic Square";
        }
        
        return "Magic Square";
        
        
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc-- > 0) {
        int n;
        cin >> n;
        vector<vector<int>> mat(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> mat[i][j];
            }
        }
        Solution sol;
        cout << sol.magicSquare(mat) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends