class Solution {
  public:
    void DSF(int n,vector<vector<int>>& adj
    ,vector<int> & ans,vector<bool>&visited){
        
        visited[n]=true;
        ans.push_back(n);
        for(int i=0;i<adj[n].size();i++){
            int u=adj[n][i];
            if(!visited[u]){
                DSF(u,adj,ans,visited);
            }
        }
        
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n=adj.size();
        vector<int>ans;
        vector<bool> visited(n,false);
        DSF(0,adj,ans,visited);
        return ans;
        
    }
};