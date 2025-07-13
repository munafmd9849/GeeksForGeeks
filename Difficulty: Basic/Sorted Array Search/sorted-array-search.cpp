class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // k: element to be searched
    bool searchInSorted(vector<int>& arr, int k) {

        // Your code here
        int s=0,e=arr.size()-1;
        while (s<=e){
            int mid=(e+s)/2;
            if(arr[mid]==k){
                return true;
            }
            else if(k<arr[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            
        }
        return false;
    }
};