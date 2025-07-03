class Solution {
  public:
    // Function to count inversions in the array.
    int c=0;
    int inversionCount(vector<int> &arr) {
        // Your Code Here
        c=0;
        mergeSort(arr,0,arr.size()-1);
        return c;
        
        
        
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if(l==r){
            return ;
        }
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
        
    }
    void merge(vector<int> &arr,int s,int m,int e){
        vector<int> r(e-s+1);
        int i=s,j=m+1,k=0;
        while(i<=m && j<=e){
            if(arr[i]<=arr[j]){
                r[k++]=arr[i++];
            }
            else{
                r[k++]=arr[j++];
                c+=m-i+1;
            }
        }
        while(i<=m){
                r[k++]=arr[i++];
            
        }
        while(j<=e){
                r[k++]=arr[j++];
            
        }
        for(int i=s;i<=e;i++){
            arr[i]=r[i-s];
        }
        
    }
};