// User function Template for C++

class Solution {
  public:
    long long int distinctColoring(int n, int r[], int g[], int b[]) {
        // code here
        if(n==1){
            return min(r[0],min(g[0],b[0]));
        }
        vector<vector<long long int>> dp(n,vector<long long int>(3,-1));
        
        return min(r[n-1]+fun(dp,n-2,r,g,b,1),
                min(g[n-1]+fun(dp,n-2,r,g,b,2),b[n-1]+
                fun(dp,n-2,r,g,b,3)));
                
    }
    long long int fun(vector<vector<long long int>> &dp,int n,int r[], int g[], int b[],int prev){
        if(n==-1){
            return 0;
        }
        
        if(dp[n][prev-1]==-1){
            
            if(prev==1){
                dp[n][prev-1]= min(g[n]+fun(dp,n-1,r,g,b,2),
                            b[n]+fun(dp,n-1,r,g,b,3));
            }
            else if(prev==2){
                dp[n][prev-1]= min(r[n]+fun(dp,n-1,r,g,b,1),
                        b[n]+fun(dp,n-1,r,g,b,3));
                
            }
            else{
                dp[n][prev-1]= min(g[n]+fun(dp,n-1,r,g,b,2),
                        r[n]+fun(dp,n-1,r,g,b,1));
            }
        }
        
        return dp[n][prev-1];
        
    }
};