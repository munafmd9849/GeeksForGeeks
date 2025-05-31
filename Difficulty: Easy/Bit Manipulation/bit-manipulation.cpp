class Solution {
  public:
    void bitManipulation(int num, int i) {
        // your code here
        (num&(1<<(i-1)))?cout<<1<<" ":cout<<0<<" ";
        
        cout<<(num|1<<(i-1)) <<" "<<(num & (~(1<<(i-1))));
    }
};