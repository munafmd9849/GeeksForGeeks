class Solution {
  public:
    // arr[] is the array
    long long int product(vector<int> &arr) {
        // code here
        long long pro=1,mod=1000000007;
        for(int i=0;i<arr.size();i++){
            pro=(pro*arr[i])%mod;
        }
        return pro;
    }
};