class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        unordered_set<int> us;
        vector<int> ans;
        
        for(int i:arr){
            if(us.find(i)!=us.end()){
                continue;
            }
            us.insert(i);
            ans.push_back(i);
 
        }
        return ans;
    }
};