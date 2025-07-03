class Solution {
  public:
    vector<int> getThreeLargest(vector<int>& arr) {
        // code here
        vector<int> ans;
        sort(arr.begin(),arr.end(),greater<int>());
        unordered_set<int> us;
        int c=0;
        for(int i=0;i<arr.size();i++){
            if(us.find(arr[i])==us.end()){
                c++;
                us.insert(arr[i]);
                ans.push_back(arr[i]);
            }
            else{
                continue;
            }
            if(c==3){
                break;
            }
        }
        return ans;
    }
};
