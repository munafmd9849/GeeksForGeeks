class Solution {
  public:
    int countPairs(vector<int> &arr, int k) {
        // Code here
        int n=arr.size(),c=0;
        unordered_map<int,int>um;
        for(int i=n-1;i>=0;i--){   // i<j
            if(um.find(k-arr[i])!=um.end()){
                c+=um[k-arr[i]];
            }
            um[arr[i]]++;
            
        }
        return c;
    }
};