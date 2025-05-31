// User function Template for C++

char extraChar(string &s1, string &s2) {

    // code here
    int ans=0;
    for(int i=0;i<s1.size();i++){
        ans=ans^s1[i]^s2[i];
    }
    ans=ans^s2[s1.size()];
    return (char)ans;
}