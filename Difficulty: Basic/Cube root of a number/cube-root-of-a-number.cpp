class Solution {
  public:
    int cubeRoot(int x){
        // code here
        if(x==0 || x==1){
            return x;
        }
        int s=1,e=min(x,100),ans=0;
        while(s<=e){
            long mid=s+(e-s)/2;
            if(mid*mid*mid<=x){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
};