class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int n=adj.size();
        queue<int> que;
        vector<int> ans;
        vector<bool> visited(n,false);
        que.push(0);
        visited[0]=true;
        while(!que.empty()){
            int u=que.front();
            que.pop();
            ans.push_back(u);
            for(int i=0;i<adj[u].size();i++){
                if(!visited[adj[u][i]]){
                    que.push(adj[u][i]);
                    visited[adj[u][i]]=true;
                }
            }
        }
        return ans;
    }
};