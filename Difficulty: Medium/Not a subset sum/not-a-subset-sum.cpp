// User function template for C++

class Solution {
  public:
    long long findSmallest(vector<int> &arr) {
        // Your code goes here.
        if(arr[0]>1){
            return 1l;
        }
        long long sum=1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>sum)
                return sum;
            else sum+=arr[i];
        }
        return sum;
    }
};