// User function template for C++

class Solution {
  public:
    long long findRank(string str) {
        // code here
         int n = str.length();
        long long int array[256] = {};
        
        for(int i = 0; i < n; i++){
            array[str[i]]++;
        }
        
        long long int fact[26] = {0};
        fact[0] = 1;
        for(int i = 1; i < 26; i++){
            fact[i] = i*fact[i-1];
        }
        long long int ans = 0;
        
        for(int i = 0; i < n; i++){
            int count = 0;
            for(int j = 0; j < 256; j++){
                if(str[i] == j){
                    break;
                }
                if(array[j]){
                    count++;
                }
            }
            array[str[i]]--;
            ans = ans + count*fact[n-1-i];
        }
        return ans+1;
        
    }
};