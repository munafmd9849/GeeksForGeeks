class Solution {
  public:
    int setAllRangeBits(int N, int l, int r) {
        for(int i=l-1;i<r;i++){
            N=N|1<<i;
        }
        return N;
    }
};