class Solution {
  public:
    int countBitsFlip(int a, int b) {
        int c=0;
        for(int i=0;i<32;i++){
            if(((a^b)>>i) & 1){
                c++;
            }
        }
        return c;
    }
};