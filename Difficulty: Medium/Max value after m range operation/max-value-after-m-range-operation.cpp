class Solution {
  public:
    int findMax(int n, vector<int>& a, vector<int>& b, vector<int>& k) {
        // code here
        vector<int> arr(n,0);
        for(int i=0;i<a.size();i++){
            arr[a[i]]+=k[i];
            if(b[i]+1<n)
            arr[b[i]+1]-=k[i];
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            arr[i]=sum;
        }
        int max=INT_MIN;
        for(int i:arr){
            if(max<i){
                max=i;
            }
        }
        return max;
    }
};