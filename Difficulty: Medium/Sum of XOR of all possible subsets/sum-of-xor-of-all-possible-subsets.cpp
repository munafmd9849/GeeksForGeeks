// User function template for C++
class Solution {
  public:
    int subsetXORSum(vector<int>& arr) {
       int orAll = 0;
        for (int num : arr) {
            orAll |= num;
        }
        return orAll * (1 << (arr.size() - 1));

    }
};