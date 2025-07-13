class Solution {
  public:
    int lowerBound(vector<int>& arr, int k) {
        // code here
        int s=0,e=arr.size()-1,ans=arr.size();
        while (s<=e){
            int mid=(e+s)/2;
            if(arr[mid]>=k){
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
