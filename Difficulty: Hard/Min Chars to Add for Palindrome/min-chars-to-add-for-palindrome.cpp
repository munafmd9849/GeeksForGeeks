class Solution {
  public:
    int minChar(string &s) {
        // code here
        int n=s.length();
        string s2=s;
        reverse(s.begin(),s.end());
        s2+="@"+s;
        
        vector<int> lps(s2.length());
        lps[0]=0;
        for(int i=1;i<lps.size();i++){
            int x=lps[i-1];
            while(s2[i]!=s2[x]){
                if(x==0){
                    x=-1;
                    break;
                }
                x=lps[x-1];
            }
            lps[i]=x+1;
        }
        
        
        
        return n-lps[lps.size()-1] ;
    }
};
