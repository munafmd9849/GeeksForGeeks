class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        string a=s;
        reverse(a.begin(),a.end());
        return a==s;
        
    }
};