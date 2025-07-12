// User function Template for C++

class Solution {
  public:
    vector<int> sortArray(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int> um;
        for(int i:arr){
            um[i]++;
        }
        vector<int> ans;
        for(int i=1;i<=n;i++){
            for(int j=0;j<um[i];j++){
                ans.push_back(i);
            }
        }
        return ans;
    }
};