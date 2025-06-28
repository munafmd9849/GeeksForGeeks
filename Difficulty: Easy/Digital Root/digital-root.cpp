// User function Template for C++

class Solution {
  public:
    // Complete this function
    int sum=0;
    int digitalRoot(int n) {
        
        if(n<10){
            return n;
        }
        else{
            return digitalRoot(n/10 + n%10);
        }
        
    }
};