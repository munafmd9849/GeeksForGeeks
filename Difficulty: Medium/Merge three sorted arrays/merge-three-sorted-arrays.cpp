class Solution {
  public:
    // A, B, and C: input sorted arrays
    // Function to merge three sorted vectors or arrays
    // into a single vector or array.
    vector<int> mergeThree(vector<int>& A, vector<int>& B, vector<int>& C) {
        // Your code here
        int a=A.size(),b=B.size(),c=C.size();
        vector<int> arr1(a+b);
        int i=0,j=0,k=0;
        while(i<a && j<b){
            if(A[i]<B[j]){
                arr1[k++]=A[i++];
            }
            else{
                
                arr1[k++]=B[j++];
            }
        }
        while(i<a){
                arr1[k++]=A[i++];
            
        }
        while(j<b){
                arr1[k++]=B[j++];
            
        }
        vector<int> arr2(a+b+c);
        i=0;j=0;k=0;
        while(i<a+b && j<c){
            if(arr1[i]<C[j]){
                arr2[k++]=arr1[i++];
            }
            else{
                
                arr2[k++]=C[j++];
            }
        }
        while(i<a+b){
                arr2[k++]=arr1[i++];
            
        }
        while(j<c){
                arr2[k++]=C[j++];
            
        }
        return arr2;
        
    }
};