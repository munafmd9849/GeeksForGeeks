class Solution {
  public:
    int powMod(int x, int n, int M) {
        // code here
        if (n==0)return 1;
        long t=powMod(x,n/2,M);
        if(n%2==0){
            return (t*t)%M;
        }
        else{
            return ((t*t)%M *(x%M))%M;
        }
    }
};