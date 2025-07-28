// User function template for C++
class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
        int n=mat.size();
        int p1=0;
        int p2=mat[0].size()-1;
        while(p1<n && p2>=0){
            if(mat[p1][p2]>x){
                p2--;
                
            }
            else if(mat[p1][p2]<x){
                p1++;
            }
            else{
                return true;
            }
        }
        return false;
        
    }
};