class Solution {
  public:
    int countDigits(int n) {
        // Code here
        if(n==0){
            return 0;
        }
        return 1+countDigits(n/10);
    }
};