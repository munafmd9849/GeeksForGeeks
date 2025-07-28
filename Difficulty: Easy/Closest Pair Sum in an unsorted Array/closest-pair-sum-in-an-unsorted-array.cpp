// User Function Template
class Solution {
  public:
    vector<int> closestPairSum(vector<int> &arr, int target) {
        // Code here
        sort(arr.begin(),arr.end());
        vector<int>ans;
        int minAbs=INT_MAX;
        int p1=0;
        int p2=arr.size()-1;
        while(p1<p2){
            int temDiff=abs(arr[p1]+arr[p2]-target);
            int t=arr[p1]+arr[p2];
            if(temDiff==minAbs){
                int a=abs(ans[0]-ans[1]);
                int b=abs(arr[p1]-arr[p2]);
                if(b>a){
                    ans[0]=arr[p1];
                    ans[1]=arr[p2];
                }
            }
            
            if(temDiff<minAbs){
                minAbs=temDiff;
                ans={arr[p1],arr[p2]};
            }
            if(t<target){
                p1++;
            }
            else if(t>target){
                p2--;
            }
            else{
                return {arr[p1],arr[p2]};
            }
        }
        
        return ans;
    }
};
  