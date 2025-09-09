// User function Template for C++

class Solution {
  public:

    int aggressiveCows(vector<int> &stalls, int k) {

        // Write your code here
        int n=stalls.size();
        sort(stalls.begin(),stalls.end());
        int l=1,h=stalls[n-1],ans=0;
     
        while(l<=h){
            int mid=(l+h)/2;
            if(check(stalls,mid,k)){
                ans=mid;
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return ans;
        
    }
    
    
    bool check(vector<int> & a,int mid,int k){
        int last_cow=a[0],
        c=1;
        for(int i=1;i<a.size();i++){
            if(a[i]-last_cow>=mid){
                c++;
                last_cow=a[i];
            }
        }
        if(c<k){
            return false;
        }
        else{
            return true;
        }
    
        
    }
};