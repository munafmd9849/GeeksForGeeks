class Solution {
  public:
    int maxPartitions(vector<int>& arr) {
        // code here
        int n = arr.size();
        int maxi=0;
        int c=0,index=0;
        for(int i=0;i<n;i++){
            index+=i;
            maxi+=arr[i];
            if(maxi==index)c++;
        }
        return c;
    }
};