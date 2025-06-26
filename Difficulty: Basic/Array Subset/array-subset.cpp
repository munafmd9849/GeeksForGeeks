class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        unordered_map<int ,int> mapp;
        // for(auto i:a){
        //     mapp[i]=0;
        // }
        for(auto i:a){
            mapp[i]++;
        }
        
        for(auto i:b){
            if(mapp.find(i)!=mapp.end()){
                if(mapp[i]<=0){
                    return false;
                }
                else
                    mapp[i]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};