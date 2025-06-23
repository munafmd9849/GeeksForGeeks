class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int largest = INT_MIN, sec_largest = INT_MIN, idx =-1;
        
         if (n < 2) return -1; 
        
        //largest
        for(int i=0; i<n; i++){
            
           if(arr[i]>largest){
            
            largest = arr[i];
            idx = i;
           }
        }
        
        //replacing largest value with -1
        if(idx!=-1){
            arr[idx] = -1;
        }
        
        //sec_largest value
        
        for(int i=0; i<n; i++){
            
            if(arr[i] != largest){
            sec_largest = max(sec_largest,arr[i]);
            }
        }
        
        if(sec_largest == -1 || sec_largest == INT_MIN){
            return -1;
        }
        
        return sec_largest;
    }
};