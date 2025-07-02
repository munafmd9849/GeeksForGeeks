class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        // code here
        vector<int> res;
        unordered_set<int> us;
        for(int i:a){
            us.insert(i);
        }
        for(int i:b){
            if(us.find(i)!=us.end()){
                res.push_back(i);
                us.erase(i);
            }
        }
        return res;
    }
};