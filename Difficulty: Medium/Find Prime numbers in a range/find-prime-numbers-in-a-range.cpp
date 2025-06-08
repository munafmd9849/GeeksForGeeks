// User function Template for C++

class Solution {
  public:
    vector<int> primeRange(int M, int N) {
        // code here
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
        vector<int>p1;
        for(int i=2;i<=n;i++){
            if(a[i]){
                p1.push_back(i);
            }
        }
        
        vector<int> all(N-M+1,true);
        for(int i=0;i<p1.size();i++){
            int p=p1[i];
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
        vector<int> ans;
        for(int i=0;i<=N-M;i++){
            if(all[i]){
                ans.push_back(i+M);
            }
        }
        return ans;
        
    }
};