class Solution {
  public:
    int findUnique(int k, vector<int>& arr) {
        unordered_map<int,int> freq;
        for(int i:arr){
            freq[i]++;
            if(freq[i]==k){
                freq.erase(i);
            }
        }
        for(auto i:freq){
            return i.first;
        }
        
    }
};