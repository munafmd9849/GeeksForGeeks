// User function Template for C++

class Solution {
  public:
    int maxXor(vector<int> &arr) {
        // code here
        int max=0,x=0;
        for(int i=31;i>=0;i--){
            x=x|(1<<i);
            unordered_set<int> us;
            for(int j:arr){
                us.insert(j & x);
            }
            int temp=max|(1<<i);
            for(int j:us){
                if(us.find(temp^j)!=us.end()){
                    max=temp;
                    break;
                }
            }
        }
        return max;
        
    }
};
