class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        stack<int> s;
        
        vector<int> ans(arr.size(),-1);
        
        for(int i=arr.size()-1;i>=0;i--){
            while(s.size()>0 && arr[i]>=s.top()){
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