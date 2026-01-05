class Solution {
  public:
    int maxEvents(int start[], int end[], int N) {
        // code here
        
        vector<pair<int,int>>v;
        for(int i = 0; i<N; i++){
            v.push_back({start[i], end[i]});
        }
        sort(v.begin(), v.end());
        int n = v.size();
        priority_queue<int,vector<int>,greater<int>>pq;
        int ans = 0, i = 0;
        for(int day = 1; i<n || !pq.empty();day++){
            while(i<n && v[i].first == day)pq.push(v[i++].second);
            while(!pq.empty() && pq.top() < day)pq.pop();
            if(!pq.empty()){
                pq.pop();
                ans++;
            }
        }
        return ans;
        
    }
};

