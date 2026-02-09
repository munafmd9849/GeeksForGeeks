class Solution {
public:
    bool isSubsetSum(vector<int>& arr, int sum) {
        int n = arr.size();
        vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));

        for(int i=0;i<n;i++){
            
            for(int j=0;j<=sum;j++){
                
                if(i==0){
                    if(j==0 || j==arr[0]){
                        dp[i][j]=1;
                        
                    }
                    else{
                        dp[i][j]=0;
                    }
                }
                else{
                    bool a=dp[i-1][j];
                    bool b=j>=arr[i]?dp[i-1][j-arr[i]]:false;
                    dp[i][j] =a||b;
                }
                
            }
        }
        return dp[n-1][sum];
    }
};

















// class Solution {
//   public:
  
//     bool fun(int i,int carrySum,vector<int>&arr,int &sum){
//         if(i<0){
//             return carrySum==sum;
//         }
        
//         return fun(i-1,carrySum+arr[i],arr,sum) || fun(i-1,carrySum,arr,sum);
        
        
//     }
//     bool isSubsetSum(vector<int>& arr, int sum) {
        
//         return fun(arr.size()-1,0,arr,sum);
//     }
    
    
//};