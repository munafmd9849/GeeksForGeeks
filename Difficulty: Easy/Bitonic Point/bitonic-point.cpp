// User function template for C++
class Solution {
  public:
    int findMaximum(vector<int> &arr) {
        // code here
        int ans = arr[0];
       for(int a : arr)
           if(a>=ans) ans = a;
           else return ans;
       return ans;
        
    }
};