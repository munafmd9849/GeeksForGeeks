class Solution {
  public:
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int> ans;
        sumAllSubsets(0,0,arr,arr.size(),ans);
        return ans;
    }
    void sumAllSubsets(int i,int sum,vector<int> & arr,int n,vector<int>& ans){
        
        
        if(i==n){
            ans.push_back(sum);
            return;
        }
        
        sum+=arr[i];
        sumAllSubsets(i+1,sum,arr,n,ans);
        sum-=arr[i];
        sumAllSubsets(i+1,sum,arr,n,ans);
        return;
    }
};