class Solution {
  public:
    // Function to find the difference between the maximum and minimum frequency of
    // elements.
    int findDiff(vector<int>& arr) {
        // code here
        unordered_map<int,int> freq;
        for(auto i:arr){
            freq[i]++;
        }
        int minf=INT_MAX,maxf=INT_MIN;
        for(auto i=freq.begin();i!=freq.end();i++){
            if(i->second>maxf){
                maxf=i->second;
            }
            if(i->second<minf){
                minf=i->second;
            }
        }
        return maxf-minf;
    }
};