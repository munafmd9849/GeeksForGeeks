// Final function implementation
class Solution {
  public:
    int minSwap(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int c=0;
        for(int i:arr){
            if(i<=k){
                c++;
            }
        }
        int c2=0;
        for(int i=0;i<c;i++){
            if(arr[i]<=k){
                c2++;
            }
        }
        int s=0,e=c;
        int minSwap=c-c2;
        while(e<n){
            if(arr[s]<=k){
                c2--;
            }
            if(arr[e]<=k){
                c2++;
            }
            minSwap=min(minSwap,c-c2);
            
            s++;
            e++;
        }
        return minSwap;
    }
};
