
class Solution {
  public:
    string longestPalindrome(string &s) {
        // code here
        int n=s.length();
        string ans="";
        for(int i=0;i<n;i++){
            int l=i-1,r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                l--;r++;
            }
            string c=s.substr(l+1,r-l-1);
            if(c.length()>ans.length()){
                ans=c;
            }
            
        }
        for(int i=0;i<n-1;i++){
            int l=i,r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                l--;r++;
            }
            string c=s.substr(l+1,r-l-1);
            if(c.length()>ans.length()){
                ans=c;
            }
            
        }
        return ans;
        
    }
};

