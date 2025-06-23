class Solution {
  public:
    vector<int> rowSum(vector<vector<int>>& mat) {
        vector<int> ans(mat.size());
        for(int i=0;i<mat.size();i++){
            int sum=0;
            for(int j=0;j<mat[0].size();j++){
                sum+=mat[i][j];
            }
            ans[i]=sum;
        }
        return ans;
    }
};