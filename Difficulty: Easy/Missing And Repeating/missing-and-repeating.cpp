class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        int x=0;
        for(int i=0;i<n;i++){
            x=x^arr[i];
            x=x^i;
        }
        x=x^n;
        int pos;
        for(int i=0;i<32;i++){
            if((x>>i)&1==1){
                pos=i;
                break;
            }
        }
        int set=0,unset=0;
        for(int i=0;i<n;i++){
            if((arr[i]>>pos)&1==1 ){
                set=set^arr[i];
                
            }
            else{
                unset=unset^arr[i];
            }
            if((i>>pos)&1){
                set=set^i;
            }
            else{
                unset=i^unset;
            }
        }
        if((n>>pos)&1){
            set=set^n;
        }
        else{
            unset=unset^n;
        }
        
        for(int i=0;i<n;i++){
            if(arr[i]==set){
                return {set,unset};
            }
        }
        return {unset,set};
        
        
    }
};