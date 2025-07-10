// User function Template for C++

class Solution {
  public:
    int equalizeArray(int N, int k, int a[]) {
        // code here
        int m=a[0]%k;
        for(int i=0;i<N;i++){
            if(a[i]%k!=m){
                return -1;
            }
        }
        for(int i=0;i<N;i++){
            a[i]=(a[i]-m)/k;
        }
        sort(a,a+N);
        int mid=a[N/2];
        int sum=0;
        for(int i=0;i<N;i++){
            sum=(sum+abs(a[i]-mid))%(1000000007);
        }
        return sum;
        
    }
};