class Solution {
  public:

    int findFloor(vector<int>& arr, int k) {
        // Your code here
        int s=0,e=arr.size()-1,ans=-1;
        while (s<=e){
            int mid=(e+s)/2;
            if(arr[mid]<=k){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            
        }
        return ans;
    }
};
