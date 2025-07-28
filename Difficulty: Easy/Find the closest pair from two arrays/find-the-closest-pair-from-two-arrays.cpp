// User function teamplate for C++

class Solution {
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int target) {
        // code here
        vector<int>ans(2);
        int minAbs=INT_MAX;
        int p1=0;
        int p2=m-1;
        while(p1<n && p2>=0){
            int temDiff=abs(arr[p1]+brr[p2]-target);
            int t=arr[p1]+brr[p2];
            
            if(temDiff<minAbs){
                minAbs=temDiff;
                ans={arr[p1],brr[p2]};
            }
            if(t<target){
                p1++;
            }
            else if(t>target){
                p2--;
            }
            else{
                return {arr[p1],brr[p2]};
            }
        }
        
        return ans;
    }
};