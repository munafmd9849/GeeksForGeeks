// User function template for C++

// points : 2-d vector containing the (x, y) points
// K : number of closest points that we need to find
// return 2d vector containing the k points in increasing order of distance from origin

class Solution {
  public:
    static bool small(vector<int> s1,vector<int> s2){
        int d1=s1[0]*s1[0] + s1[1]*s1[1];
        int d2=s2[0]*s2[0] + s2[1]*s2[1];
        
        if(d1==d2){
            if(s1[0]==s2[0]){
                return s1[1]<s2[1];
            }
            
            else
            return s1[0]<s2[0];
        }
        else{
            return d1<d2;
        }
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        // code here
        sort(points.begin(),points.end(),small);
        vector<vector<int>> ans(K);
        for(int i=0;i<K;i++){
            ans[i]=points[i];
        }
        return ans;
        
    }
};