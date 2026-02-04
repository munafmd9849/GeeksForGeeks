class Solution {
  public:
    int countFriendsPairings(int n) {
        // code here
        
        int dp[3];
        dp[0]=1;
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++){
            dp[i%3]=dp[(i-1)%3]+(i-1)*dp[(i-2)%3];
        }
        return dp[n%3];
    }
};
