// User function template for C++

class Solution {
  public:
    string isKSortedArray(int arr[], int n, int k) {
        // code here.
        unordered_map<int ,int> unsorted;
        for(int i=0;i<n;i++){
            unsorted[arr[i]]=i;
        }
        sort(arr,arr+n);
       for(int i=0;i<n;i++){
           if(!(abs(unsorted[arr[i]]-i)<=k)){
               return "No";
           }
       }
       return "Yes";
        
    }
};