class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n;i++){

            arr[(arr[i]%(n+1))-1]+=n+1;
        }
        for(int i=0;i<n;i++){
            arr[i]=arr[i]/(n+1);
        }
        return arr;
    }
};
