class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        int p2=arr[0].size()-1;
        int p1=0;
        int ans=-1;
        while(p2>=0 && p1<arr.size()){
            if(arr[p1][p2]==1){
                p2--;
                ans=p1;
            }
            else{
                p1++;
            }
        }
        return ans;
    }
};