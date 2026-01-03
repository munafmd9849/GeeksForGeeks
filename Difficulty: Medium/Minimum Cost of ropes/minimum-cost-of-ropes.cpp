class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        int total=0;
        priority_queue<int,vector<int>,greater<int>> minHeap(arr.begin(),arr.end());
        while(minHeap.size()>1){
            int l1=minHeap.top();
            minHeap.pop();
            int l2=minHeap.top();
            minHeap.pop();
            minHeap.push(l1+l2);
            total+=(l1+l2);
        }
        
        
        return total;
    }
};