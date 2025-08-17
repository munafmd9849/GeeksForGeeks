class Solution {
  public:
    int firstOccurence(string& txt, string& pat) {
        // code here
        vector<int> patLps(pat.length());
        patLps[0]=0;
        for(int i=1;i<pat.length();i++){
            int x=patLps[i-1];
            while(pat[i]!=pat[x]){
                if(x==0){
                    x=-1;
                    break;
                }
                x=patLps[x-1];
            }
            patLps[i]=x+1;
        }
        int x=0;
        for(int i=0;i<txt.length();i++){
            while(txt[i]!=pat[x]){
                if(x==0){
                    x=-1;
                    break;
                }
                x=patLps[x-1];
            }
            x=x+1;
            if(x==pat.length()){
                return i-pat.length()+1; 
            }
        }
        return -1;
        
    }
};