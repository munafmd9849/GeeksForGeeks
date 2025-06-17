// User function template for C++
class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairs(vector<int>& arr, int k) {
        // code here
        int n=arr.size(),c=0;
        unordered_map<int,int>um;
        for(int i :arr){
            c+=um[i+k];
            c+=um[i-k];
            um[i]++;
        }
        return c;
    }
};