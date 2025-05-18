//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {

  public:
    vector<int> downwardDiagonal(int n, vector<vector<int>> a) {
        vector<int > ans(n*n);
        int c=0;
        for(int k=0;k<n;k++){
            int i=0,j=k;
            while(i<n && j>=0){
                ans[c++]=a[i][j];
                i++;j--;
            }
        }
        for(int k=1;k<n;k++){
            int i=k,j=n-1;
            while(i<n && j>=0){
                ans[c++]=a[i][j];
                j--;i++;
            }
        }
        return ans;
        
    }
};


//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDiagonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    
cout << "~" << "\n";
}

    return 0;
}

// } Driver Code Ends