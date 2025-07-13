
class Solution {
  public:
    int findClosest(vector<int>& arr, int k) {
        // Complete the function
        int s=0,e=arr.size()-1,flooR=-1;
        while (s<=e){
            int mid=(e+s)/2;
            if(arr[mid]<=k){
                flooR=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            
        }
        s=0;e=arr.size()-1;int upper=arr.size();
        while (s<=e){
            int mid=(e+s)/2;
            if(arr[mid]>=k){
                upper=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            
        }
        int diff1=abs(k-arr[flooR]);
        int diff2=abs(k-arr[upper]);
        if(diff1!=diff2){
            if(diff1>diff2){
                return arr[upper];
            }
            else{
                return arr[flooR];
                
            }
        }
        else{
            return max(arr[flooR],arr[upper]);
        }
    }
};