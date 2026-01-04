class Solution {
  public:
    int activitySelection(vector<int> &start, vector<int> &finish) {
        // code here
        int n=start.size();
        vector<pair<int,int>> act(n);
        for(int i=0;i<n;i++){
            act[i]={finish[i],start[i]};
            
        }
        sort(act.begin(),act.end());
        int c=1,endt=act[0].first;
        for(int i=1;i<n;i++){
            if(act[i].second>endt){
                c++;
                endt=act[i].first;
            }
        }
        return c;
        
    }
};