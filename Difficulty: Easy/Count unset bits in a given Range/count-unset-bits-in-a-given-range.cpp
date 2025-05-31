

class Solution {
  public:
    int countUnsetBits(int n, int l, int r) {
        // code here
        int c=0;
        for(int i=l-1;i<=r-1;i++){
            if(!(n>>i&1)){
                c++;
            }
        }
        return c;
    }
};