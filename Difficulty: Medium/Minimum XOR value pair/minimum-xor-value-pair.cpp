// User function Template for C++

class Solution {
  public:
    int minxorpair(int n, int arr[]) {
        // code here
        sort(arr,arr+n);
        int ans=INT_MAX;
        for(int i=0;i<n-1;i++){
            if((arr[i]^arr[i+1])<ans){
                ans=arr[i]^arr[i+1];
            }
        }
        return ans;
    }
};