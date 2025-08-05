// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        int p2=arr[0].size()-1;
        int ans=-1;
        int maxi=0;
        for(int i=0;i<arr.size();i++){
            int count1=0;
            for(int j=arr[0].size()-1;j>=0;j--){
                if(arr[i][j]==1){
                    count1++;
                }
                else{
                    break;
                }
            }
            if (count1>maxi){
                ans=i;
                maxi=count1;
            }
        }
        
        return ans;
    }
};





    // 0 1 1 1
    // 0 0 1 1
    // 1 1 1 1
    // 0 0 0 0 