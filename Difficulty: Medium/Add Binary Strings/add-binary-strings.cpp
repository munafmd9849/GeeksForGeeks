class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        int carry = 0, i = s1.size() - 1, j = s2.size() - 1;
        string res;

        while (j >= 0 || i >= 0 || carry) {
            int bit1 = (i >= 0) ? s1[i] - '0' : 0;
            int bit2 = (j >= 0) ? s2[j] - '0' : 0;

            res.push_back(((bit1 + bit2 + carry) % 2) + '0');
            carry = (bit1 + bit2 + carry) / 2;

            i--;
            j--;
        }

        reverse(res.begin(), res.end());

        i = 0;
        while (i < res.size() && res[i] == '0') {
            i++;
        }

        string finalstr;
        for (; i < res.size(); i++) {
            finalstr.push_back(res[i]);
        }

        return finalstr.empty() ? "0" : finalstr;
    }
};
