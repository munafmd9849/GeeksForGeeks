//Back-end complete function Template for C++

class Solution {
  public:
    int minCostClimbingStairs(vector<int>& cost) {
        // Write your code here
        int n=cost.size();
        // vector<int> dp(n+1);
        vector<int> dp(3);
        
        
        
        
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2;i<n;i++){
            dp[i%3]=cost[i]+min(dp[(i-1)%3],dp[(i-2)%3]);
        }
        
        return min(dp[(n-1)%3],dp[(n-2)%3]);
    }
};