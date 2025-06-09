// User function template for C++
class Solution {
  public:
    int totHammingDist(vector<int>& arr) {
        // code here
        int sum=0,n=arr.size();
        for(int i=0;i<32;i++){
            int set=0;
            for(int j=0;j<n;j++){
                if((arr[j]>>i)&1){
                    set++;
                }
                
            }
            sum+=set*(n-set);
        }
        return sum;
    }
};