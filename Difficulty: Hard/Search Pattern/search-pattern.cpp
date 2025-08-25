class Solution {
  public:
    vector<int> search(string &pat, string &txt) {
        // code here
        int n = txt.length(), x =0;
        vector<int> res;
        vector<int>lps(pat.length()+1,0);
        pat+='@';
 
        lps[0] = 0;
        for(int i=1; i<pat.length(); ++i){
            int x = lps[i-1];
            while(pat[x] != pat[i]){
                if(x == 0){
                    x = -1;
                    break;
                }
                x = lps[x-1];
            }
 
            lps[i] = x + 1;
        }
 
 
 
        for(int i=0; i<n; ++i){
            while(txt[i] != pat[x]){
                if(x==0) {
                    x = -1; 
                    break;
                }
                x = lps[x-1];
            }
 
            x+=1;
            if(x == pat.length()-1) res.push_back(i - pat.length() + 2);
        }
 
        return res;
    }
};