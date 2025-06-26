class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        // code here.
        unordered_map<long,int> um;
        vector<long> pf(arr.size());
        long sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            pf[i]=sum;
        }
        um[0]++;
        int count=0;
        for(long i:pf){
            if(um.find(i)!=um.end()){
                count+=um[i];
            }
            um[i]++;
        }
        return count;
    }
};