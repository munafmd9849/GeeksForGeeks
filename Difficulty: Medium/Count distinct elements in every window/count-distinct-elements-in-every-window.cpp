class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here.
        int n=arr.size();
        vector<int> ans;
        unordered_map<int ,int> um;
        for(int i=0;i<k;i++){
            um[arr[i]]++;
        }
        ans.push_back(um.size());
        int s=0,e=k;
        while(e<n){
            um[arr[s]]--;
            um[arr[e]]++;
            if(um[arr[s]]==0){
                um.erase(arr[s]);
            }
            ans.push_back(um.size());
            s++;e++;
        }
        return ans;
    }
};