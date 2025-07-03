class Solution {
  public:
    int maxPerimeter(vector<int> &a) {
        // code here.
        sort(a.begin(),a.end());
        for(int i=a.size()-1;i>=2;i--){
            if(a[i]<a[i-1]+a[i-2]){
                return a[i]+a[i-1]+a[i-2];
            }
        }
        return -1;
    }
    
};