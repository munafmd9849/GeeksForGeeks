class Solution {
  public:
    int minStepToReachTarget(vector<int>& knightPos,
    vector<int>& targetPos, int n) {
        vector<vector<bool>> vis(n+1,vector<bool>(n+1,false));
        vector<vector<int>> dis(n+1,vector<int>(n+1,-1));
        
        vis[knightPos[0]][knightPos[1]]=true;
        dis[knightPos[0]][knightPos[1]]=0;
        
        queue<pair<int,int>> q;
        q.push({knightPos[0],knightPos[1]});
        
        int x[]={1,2,  1,  2,  -1 , -2,  -1,  -2};
        int y[]={2 , 1 ,-2, -1,   2,   1,  -2 , -1};
        while(q.size()>0){
            pair<int,int> u=q.front();
            int i=u.first;
            int j=u.second;
            q.pop();
            for(int a=0;a<8;a++){
                if(i+x[a]<=n && j+y[a]<=n && i+x[a]>0 && j+y[a]>0 && !vis[i+x[a]][j+y[a]]){
                    q.push({i+x[a],j+y[a]});
                    vis[i+x[a]][j+y[a]]=true;
                    dis[i+x[a]][j+y[a]]=dis[i][j]+1;
                }
            }
            
        }
        return dis[targetPos[0]][targetPos[1]];
        
    }
};



