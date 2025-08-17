

class Solution {
  public:
    int patternCount(string s) {
        // code here.
        int n=s.length();
        string temp="";
        temp+=s[0];
        for(int i=1;i<n;i++){
            if(s[i]!=temp[temp.length()-1]){
                temp+=s[i];
            }
        }
        s=string("101")+"#"+temp;
        int x=0,c=0;
        int lpsPat[]={0,0,1,0};
        for(int i=4;i<s.length();i++){
            while(s[i]!=s[x]){
                if (x==0){
                    x=-1;
                    break;
                }
                x=lpsPat[x-1];
            }
            x=x+1;
            if(x==3){
                c++;
            }
            
        }
        return c;
    }
};