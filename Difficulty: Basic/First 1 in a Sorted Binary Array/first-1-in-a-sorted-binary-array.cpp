class Solution {
  public:
    int firstIndex(vector<int> &arr) {
        // Your code goes here
        int s=0,e=arr.size()-1,ans=-1,k=1;
        while (s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]==k){
                ans=mid;
                e=mid-1;
            }
            else if(k<arr[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            
        }
        return ans;
    }
};