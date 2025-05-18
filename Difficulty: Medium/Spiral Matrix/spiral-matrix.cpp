//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {

  public:
    int findK(vector<vector<int>> &mat, int n, int m, int k) {

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
        return ans[k-1];
    }
};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    
cout << "~" << "\n";
}
}
// } Driver Code Ends