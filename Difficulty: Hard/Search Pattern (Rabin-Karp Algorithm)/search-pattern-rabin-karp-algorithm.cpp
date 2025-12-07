class Solution {
public:
    vector<int> rabinKarp(string &text, string &pattern) {
        
        vector<int> ans;
        int n = text.length();
        int k = pattern.length();
        if(k > n) return ans;

        const long long m = 1e9+7;
        const long long p = 101;

        // store powers in reverse: p^(k-1), p^(k-2)..., p^0
        vector<long long> powe(k);
        powe[k-1] = 1;
        for(int i = k-2; i >= 0; i--)
            powe[i] = (powe[i+1] * p) % m;

        long long hp = 0, ht = 0;

        // compute initial hash
        for(int i = 0; i < k; i++){
            hp = (hp + (long long)(pattern[i] - 'a' + 1) * powe[i]) % m;
            ht = (ht + (long long)(text[i] - 'a' + 1) * powe[i]) % m;
        }

        if(hp == ht) ans.push_back(0);

        int s = 0, e = k - 1;

        while(e < n - 1) {

            // remove left char's contribution
            ht = (ht - ((long long)(text[s] - 'a' + 1) * powe[0]) % m + m) % m;

            // shift window: multiply by p
            ht = (ht * p) % m;

            // add next char
            ht = (ht + (text[e+1] - 'a' + 1)) % m;

            s++; 
            e++;

            if(ht == hp) ans.push_back(s);
        }

        return ans;
    }
};
