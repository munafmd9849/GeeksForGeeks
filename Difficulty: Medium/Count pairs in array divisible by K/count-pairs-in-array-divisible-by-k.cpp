// User function Template for C++

class Solution {
  public:
    long long countKdivPairs(int a[], int n, int k) {
        // code here
        long long count=0;
        for(int i=0;i<n;i++){
            a[i]=a[i]%k;;
        }
        vector<long long> frq(k,0);
        for(int i=0;i<n;i++){
            int x=a[i];
            if(x==0){
                count+=frq[0];
                frq[0]++;
                continue;
            }
            int y=k-a[i];
            count+=frq[y];
            frq[x]++;
        }
        return count;
    }
};