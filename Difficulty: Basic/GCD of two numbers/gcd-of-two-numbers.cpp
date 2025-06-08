
class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        if(a<b){
            int tem=a;
            a=b;
            b=tem;
        }
        
        while(a/b>0){
            if(a%b==0){
                break;
            }
            else{
                int rem=a%b;
                a=b;
                b=rem;
            }
            
        }
        return b;
    }
};
