class Solution {
  public:
    int findMaxAnd(vector<int>& arr) {
       // code here
        int res = 0;
        for (int bit = 20; bit >= 0; bit--) {  // 2^19 > 5*10^5
            int temp = res | (1 << bit);
            int count = 0;
            for (int num : arr) {
                if ((num & temp) == temp) count++;
                if (count >= 2) break;
            }
            if (count >= 2) res = temp;
        }
        return res;
    }
};
