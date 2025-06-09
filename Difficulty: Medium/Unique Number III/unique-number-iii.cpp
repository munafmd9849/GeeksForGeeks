// User function Template for C++

class Solution {
  public:
    int getSingle(vector<int> &arr) {
        int ans=0,n=arr.size();
        for(int i=0;i<32;i++){
            int set=0;
            for(int j=0;j<n;j++){
                if((arr[j]>>i)&1){
                    set++;
                }
            }
            if(set%3!=0){
                ans=ans|(1<<i);
            }
        }
        return ans;
        
        
    }
};