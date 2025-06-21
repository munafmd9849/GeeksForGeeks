class Solution {
  public:
    vector<int> getDistinct(vector<int> &arr) {
        // code here
        unordered_map<int ,int> um;
        vector<int> ans;
        for(int i:arr){
            if(i > 0) {
                um[i]++;
            } 
            else{
                if(um.find(-i)!=um.end()) {
                    um[-i]--;
                    if (um[-i] == 0) {
                        um.erase(-i);
                    }
                }
            }
            ans.push_back(um.size());
        }
        return ans;
    }
};