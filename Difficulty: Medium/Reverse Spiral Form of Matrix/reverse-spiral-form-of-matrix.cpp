//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int n, int m, vector<vector<int>>& mat) {
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
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends