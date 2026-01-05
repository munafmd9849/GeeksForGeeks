class Solution {
  public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        // code here
        set<int> ts;
        int n=profit.size();
        for(int i=1;i<=n;i++){
            ts.insert(i);
        }
        
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({profit[i],deadline[i]});
            
        }
        sort(v.begin(),v.end());
        int ans=0;
        int jobs=0;
        for(int i=n-1;i>=0;i--){
            
            if(floor(ts,v[i].second) != -1){
                
                int open_slot=floor(ts,v[i].second);
                ts.erase(open_slot);
                ans=ans+v[i].first;
                jobs++;
            }
        }
        
        return {jobs,ans};
        
        
    }
    
    int floor(set<int> &ts,int k){
        
        auto it=ts.upper_bound(k);
        if(it==ts.begin()){
            return -1;
        }else{
            it--;
            return *it;
        }
    }
};