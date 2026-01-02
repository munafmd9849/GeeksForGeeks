// The functions should be written in a way that array become sorted
// in increasing order when heapSort() is called.

class Solution {
  public:
    // Function to sort an array using Heap Sort.
    void heapSort(vector<int>& arr) {
        // code here
        for(int l=arr.size()-1;l>=0;l--){
            heapDown(arr,arr.size(),l);
        }
        int n=arr.size();
        
        while(n>1){
            
            swap(arr[0],arr[n-1]);
            n--;
            heapDown(arr,n,0);
            
        }
        reverse(arr.begin(),arr.end());
    }
    
    void heapDown(vector<int>& arr,int n,int l){
        int i=l;
        while(2*i+1<n){
            int mini=2*i+1;
            if(2*i+2<n && arr[mini]>arr[2*i+2]){
                mini=2*i+2;
            }
            
            if(arr[i]<arr[mini]){
                break;
            }
            else{
                swap(arr[i],arr[mini]);
                i=mini;
            } 
        }
        
    }
    
    
};