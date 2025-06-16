class Solution {
  public:
    char firstRep(string s) {
        
        // code here.
        unordered_map<char,int> a;
        for(char i:s){
            a[i]++;
        }
        for(char i:s){
            if(a[i]>1){
                return i;
            }
        }
        return '#';
    }
};