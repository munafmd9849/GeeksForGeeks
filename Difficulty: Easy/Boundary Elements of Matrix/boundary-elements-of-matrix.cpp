//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    vector<int> BoundaryElements(vector<vector<int>>& mat) {
        int n=mat.size();
        vector<int> ans;
        if(n==1){
            ans.push_back(mat[0][0]);
            return ans;
        }
        int i=0;
        for(int l=0;l<n;l++){
            ans.push_back(mat[i][l]);
        }
        i++;
        while(i<n-1){
            ans.push_back(mat[i][0]);
            ans.push_back(mat[i][n-1]);
            i++;
        }
        for(int l=0;l<n;l++){
            ans.push_back(mat[i][l]);
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
		vector<vector<int>>matrix(n, vector<int>(n, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				cin >> matrix[i][j];
		Solution obj;
		vector<int>ans = obj.BoundaryElements(matrix);
		for(auto i: ans)
			cout << i << " ";
		cout << "\n";
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends