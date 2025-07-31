// User function Template for C++

class Solution {

  public:
    long long ValidPair(int a[], int n) {
        sort(a,a+n);
        long long sum=0;
        for(int i=0;i<n-1;i++){
            int s=i+1,e=n-1,index=-1;
            while(s<=e){
                int mid=s+(e-s)/2;
                if(a[mid]+a[i]>0){
                    index=mid;
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            if(index!=-1)
            sum+=n-1-index+1;
        }
        return sum;
    }
};