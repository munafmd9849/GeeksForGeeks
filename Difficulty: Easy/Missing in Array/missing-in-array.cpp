class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n2,n1=arr.size();
        vector<int> arr2(n1+1);
        n2=n1+1;
        for(int i=0;i<n2;i++){
            arr2[i]=i+1;
        }
        int ans=0;
        for(int i=0;i<n1;i++){
            ans=ans^arr[i]^arr2[i];
            // ans=ans^arr2[i];
        }
        ans=ans^arr2[n2-1];
        return ans;
        
    }
};