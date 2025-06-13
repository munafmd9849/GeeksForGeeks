class Solution {
  public:
    int is_bleak(int n) {
        // Code here.
        for(int i=max(1,n-32);i<n;i++){
            int set=0;
            for(int j=0;j<32;j++){
                if((i>>j)&1){
                    set++;
                }
            }
            if(set+i==n){
                return 0;
            }
        }
        return 1;
        
        
        
    }
};
