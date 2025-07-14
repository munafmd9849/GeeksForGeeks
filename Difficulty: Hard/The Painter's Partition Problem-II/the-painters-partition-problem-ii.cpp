// User function template for C++

class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
        // code here
        int max=*max_element(arr.begin(),arr.end());
        int sum=accumulate(arr.begin(),arr.end(),0);
        int s=max,e=sum,ans=0;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(check(arr,mid,k)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
    bool check(vector<int>&arr,int t,int k){
        int p=1,sum=0;
        
        for(int i:arr){
            sum+=i;
            if(sum>t){
                p++;
                sum=i;
            }
        }
        return p<=k;
    }
};