class Solution {
  public:
    vector<int> leftSmaller(vector<int> arr) {
        // code here
        stack<int> s;
        
        vector<int> ans(arr.size(),-1);
        
        for(int i=0;i<arr.size();i++){
            while(s.size()>0 && arr[i]<=s.top()){
                s.pop();
            }
            if(s.size()>0){
                ans[i]=s.top();
            }
            s.push(arr[i]);
        }
        return ans;
    }
};