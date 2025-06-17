/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr) {
        // code here
        int n=arr.size(),ans=0;
        long sum=0;
        vector<long> pf(n);
        for(int i=0;i<n;i++){
            sum+=arr[i];
            pf[i]=sum;
        }
        unordered_map<long,int> um;
        um.insert({0,-1});
        for(int i=0;i<n;i++){
            if(um.find(pf[i])==um.end()){
                um[pf[i]]=i;
            }
            else{
                ans=max(ans,i-um[pf[i]]);
            }
        }
        return ans;
    }
};