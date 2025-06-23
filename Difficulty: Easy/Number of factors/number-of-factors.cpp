class Solution {
  public:
    int countFactors(int N) {
        // code here
               int ans=0;
        int t=sqrt(N);
        for(int i=1;i<=t;i++){
            if(N%i==0){
                if(i==(N/i))
                    ans++;
                else
                    ans+=2;
            }
            
        }
        return(ans);
        
    }
};