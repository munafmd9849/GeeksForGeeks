class Solution {
  public:
    static bool check(vector<int> &arr, int mid,int k){
        int std=1;
        int stdSum=0;
        for(int i=0;i<arr.size();i++){
            stdSum+=arr[i];
            if(stdSum>mid){
                std++;
                if(std>k || arr[i]>mid){
                    return false;
                }
                stdSum=arr[i];
                
            }
        }
        return true;
    }
  
    int findPages(vector<int> &arr, int k) {
        // code here
        if(k>arr.size()){
            return -1;
        }
        int s=0;
        int sum=0;
        for(int i:arr){
            sum+=i;
        }
        int e=sum;
        int ans=-1;
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
};