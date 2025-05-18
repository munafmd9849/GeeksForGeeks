//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution {
  public:
    // Function to reverse the columns of a matrix.
    void reverseCol(vector<vector<int> > &a) {
        int n=a.size();
        for(int i=0;i<n;i++){
            reverse(a[i].begin(),a[i].end());
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.reverseCol(matrix);

        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
        }
        cout<<endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends