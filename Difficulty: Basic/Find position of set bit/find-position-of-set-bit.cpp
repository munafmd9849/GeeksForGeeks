class Solution {
  public:
    int findPosition(int n) {
        // code here
        int pos=-1,c=0;
        for(int i=0;i<32;i++){

            if(n>>i&1){
                pos=i;
                c++;
            }
        }
        if(c==0 || c>1){
            return -1;
        }
        return pos+1;
    }
};