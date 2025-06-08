// User function Template for C++

class Solution {
  public:
    long long primeProduct(long long M, long long N) {
        // code here
        long mod=1e9 +7;
        long long product=1;
        int n=sqrt(N);
        vector<int > a(n+1,true);
        a[0]=a[1]=false;
        for(int i=2;i<=n;i++){
            if(a[i]){
                for(int j=2;i*j<=n;j++){
                    a[i*j]=false;
                }
            }
        }
        vector<int>sp;
        for(int i=2;i<=n;i++){
            if(a[i]){
                sp.push_back(i);
            }
        }
        
        vector<bool> all(N-M+1,true); //range 0---m  lastidex---N
        for(int i=0;i<sp.size();i++){
            int p=sp[i];
            int fm=0;
            if(M%p==0){
                fm=M/p;
            }
            else{
                fm=M/p +1;
            }
            if(fm==1){
                fm++;
            }
            for(int j=fm;p*j<=N;j++){
                all[p*j-M]=false;
            }
        }
        if(M==1){
            all[0]=false;
        }
        for(int i=0;i<=N-M;i++){
            if(all[i])
            product=(product*(i+M))%mod;
        }
        return product;
        // vector<int> ans;
        // for(int i=0;i<=N-M;i++){
        //     if(all[i]){
        //         ans.push_back(i+M);
        //     }
        // }
        // return ans;
    }
};