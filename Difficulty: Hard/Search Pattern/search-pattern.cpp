class Solution {
  public:
    vector<int> lps(string s){
            int n=s.length();
            vector<int> ans(n);
            ans[0]=0;
            for(int i=1;i<n;i++){
                int x=ans[i-1];
                while(s[i]!=s[x]){
                    if(x==0){
                        x=-1;
                        break;
                    }
                    
                    x=ans[x-1];
                }
                ans[i]=x+1;
            }
            return ans;
    }
    
    vector<int> search(string &pat, string &txt) {
        // code here
        string s=pat+"#"+txt;
        
        vector<int> lpsarr=lps(s);
        
        int p=pat.length();
        
        vector<int> c;
        
        for(int i=p+1;i<lpsarr.size();i++){
            if(lpsarr[i]==p){
                c.push_back(i-2*p);
            }
        }
        // for(int i:lpsarr){
        //     cout<<i;
        // }
        
        return c;
        
    }
};