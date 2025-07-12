class Solution {
  public:
    // Function to calculate the sum of selections
    int Selection(vector<int>& arr) {

        int mod=1e9+7,n=arr.size();
        long long sum=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            sum=(sum+(arr[i]*i))%mod;
        }
        return sum;
        
        
        
    }
};

