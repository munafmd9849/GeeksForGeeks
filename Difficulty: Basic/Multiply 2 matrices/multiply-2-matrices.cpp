//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    void Multiply(vector<vector<int>>& a, vector<vector<int>>& b) {
        int n=a.size();
        vector<vector<int>> ans(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int sum=0;
                for(int k=0;k<n;k++){
                    sum+=a[i][k]*b[k][j];
                }
                ans[i][j]=sum;
            }
        }
        a=ans;
        
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrixA(n, vector<int>(n,0));
		vector<vector<int>> matrixB(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrixA[i][j];
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrixB[i][j];
			}
		}
		Solution ob;
		ob.Multiply(matrixA, matrixB);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++)
				cout << matrixA[i][j] <<" ";
			cout << "\n";
		}
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends