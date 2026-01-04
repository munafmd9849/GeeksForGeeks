class Solution {
  public:
    vector<int> mergeArrays(vector<vector<int>> &mat) {
        // Code here
        vector<int> ans;
        int n=mat.size();
        int m=mat[0].size();
        
        
        
        
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> minh;
        for(int i=0;i<n;i++){
            minh.push({mat[i][0],{i,0}});
        }
        for(int k=0;k<m*n;k++){
            pair<int,pair<int,int>> t=minh.top();
            minh.pop();
            int ele=t.first;
            int r=t.second.first;
            int c=t.second.second;
            ans.push_back(ele);
            if(c<m-1){
                minh.push({mat[r][c+1],{r,c+1}});
            }
            
        }
        return ans;
        
    }
};