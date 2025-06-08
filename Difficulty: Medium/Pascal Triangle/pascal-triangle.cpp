
class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        vector<vector<int>> mat(n+1,vector<int>(n+1,0));
        for(int i=1;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i<j)
                mat[i][j]=0;
                else if(i==0 || j==0){
                    mat[i][j]=1;
                }
                else{
                    mat[i][j]=mat[i-1][j-1]+mat[i-1][j];
                }
            }
        }
        vector<int >ans;
        for(int i=0;i<=n;i++){
            if(mat[n][i]==0){
                break;
            }
            ans.push_back(mat[n][i]);
        }
        return ans;
        
    }
};
