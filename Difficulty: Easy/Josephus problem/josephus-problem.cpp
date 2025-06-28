class Solution {
  public:
    int josephus(int n, int k) {
        // code here
        if(n==1){
            return 1;
        }
        if((josephus(n-1,k)+k)%n==0){
            return n;
        }
        else{
            return (josephus((n-1),k)+k)%n;
        }
    }
};