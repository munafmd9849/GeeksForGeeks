//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int DiagonalSum(vector<vector<int> >& matrix) {
        int ans=0;
        for(int i=0;i<matrix.size();i++){
            ans+=matrix[i][i];
            ans+=matrix[i][matrix.size()-1-i];
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.DiagonalSum(matrix);
		cout << ans <<'\n';
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends