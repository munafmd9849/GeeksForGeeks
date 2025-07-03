class Solution {
  public:
    int maxPartitions(vector<int>& arr) {
        // code here
        int n = arr.size();
        int maxi=0;
        int c=0;
        for(int i=0;i<n;i++){
            if(arr[i]>maxi)
            maxi=arr[i];
            
            if(maxi==i)
            c++;
        }
        return c;
    }
};