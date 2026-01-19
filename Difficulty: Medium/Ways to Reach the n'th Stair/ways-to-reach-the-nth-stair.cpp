class Solution {
  public:
    int countDp(int n,vector<int> &arr){
    
        if(n<=1){
            return 1;
        }
        
         if (arr[n] != -1)
            return arr[n];

        arr[n] = countDp(n-1, arr) + countDp(n-2, arr);
        return arr[n];
    }

    int countWays(int n) {
        // your code here
        vector<int> arr(n+1,-1);
        return countDp(n,arr);
        
    }
    
};


