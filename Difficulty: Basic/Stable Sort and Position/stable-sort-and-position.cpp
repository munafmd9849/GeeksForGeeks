//Back-end complete function template in C++

class Solution {

  public:
    // Function to get the index of an element in a sorted array.
    int getIndexInSortedArray(vector<int>& arr, int k) {
        // Write Code Here
        int c=0;
        for(int i=0;i<=k;i++){
            if(arr[i]==arr[k]){
                c++;
            }
        }
        int target=arr[k];
        int n=arr.size();
        mergeSort(arr,0,n-1);
        int d=0;
        for(int i=0;i<n;i++){
            if(arr[i]==target){
                d++;
            }
            if(d==c){
                return i;
            }
        }
        
    }
    void mergeSort(vector<int> & a,int s,int e){
        if(s==e){
            return;
        }
        int mid=s+(e-s)/2;
        mergeSort(a,s,mid);
        mergeSort(a,mid+1,e);
        merge(a,s,mid,e);
    }
    void merge(vector<int> &a,int s,int mid,int e){
        int i=s,k=0,j=mid+1;
        vector<int> res(e-s+1);
        while(i<=mid && j<=e){
            if(a[i]<a[j]){
                res[k++]=a[i++];
            }
            else{
                res[k++]=a[j++];
            }
        }
        while(i<=mid){
                res[k++]=a[i++];
            
        }
        while(j<=e){
                res[k++]=a[j++];
            
        }
        for (int p = 0; p < res.size(); p++) {
            a[s + p] = res[p];
        }
        
    }
    
};