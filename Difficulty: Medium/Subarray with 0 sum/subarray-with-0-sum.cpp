class Solution {
  public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(vector<int>& arr) {
        // Your code here
        int n=arr.size();
        long sum=0;
        vector<long> pf(n);
        for(int i=0;i<n;i++){
            sum+=arr[i];
            pf[i]=sum;
        }
        unordered_set<long> us;
        us.insert(0);
        for(long i:pf){
            if(us.find(i)!=us.end()){
                return true;
            }
            us.insert(i);
        }
        return false;
    }
};