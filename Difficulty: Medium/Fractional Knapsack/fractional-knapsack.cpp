class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        int n=val.size();
        vector<pair<double,pair<int,int>>> rat(n);
        for(int i=0;i<n;i++){
            rat[i]={(double)val[i]/wt[i],{val[i],wt[i]}};
        }
        
        sort(rat.begin(),rat.end());
        
        double ans=0;
        for(int i=n-1;i>=0;i--){
            int v=rat[i].second.first;
            int w=rat[i].second.second;
            if(capacity>=w){
                ans+=v;
                capacity-=w;
            }
            else{
                ans=ans+(double)capacity*rat[i].first;
                break;
            }
            
            
        }
        return ans;
        
        
    }
};
