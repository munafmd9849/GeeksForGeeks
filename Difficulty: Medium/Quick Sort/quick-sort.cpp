class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if(low>=high){
            return;
        }
        int x=arr[high],j=low;
        for(int i=low;i<high;i++){
            if(arr[i]<x){
                swap(arr[i],arr[j]);
                j++;
            }
        }
        swap(arr[j],arr[high]);
        quickSort(arr,low,j-1);
        quickSort(arr,j+1,high);
        
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        
        // code here
        int n=arr.size();
        quickSort(arr,0,n-1);
    }
};