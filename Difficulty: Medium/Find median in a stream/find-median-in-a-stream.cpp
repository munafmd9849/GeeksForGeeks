class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) {
        // code here
        vector<double> ans;
        priority_queue<int> maxh;
        priority_queue<int,vector<int>,greater<int>> minh;
        
        maxh.push(arr[0]);
        ans.push_back((double)arr[0]);
        for(int i=1;i<arr.size();i++){
            if(arr[i]>maxh.top()){
                minh.push(arr[i]);
            }
            else{
                maxh.push(arr[i]);
            }
            
            int d=maxh.size()-minh.size();
            
            if(d==2){
                minh.push(maxh.top());
                maxh.pop();
            }
            else if(d==-1){
                maxh.push(minh.top());
                minh.pop();
            }
            
            int t=maxh.size()-minh.size();
            if(t==0){
                ans.push_back((double)(maxh.top()+minh.top())/2);
            }
            else{
                ans.push_back((double)maxh.top());
            }
        }
        return ans;
        
    }
};
