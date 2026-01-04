class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        // Code here
        int n=arr.size();
        vector<int> p;
        vector<int> t;
        for(int i=0;i<n;i++){
            if(arr[i]=='P'){
                p.push_back(i);
            }
            else{
                t.push_back(i);
            }
        }
        int p1=0,p2=0;
        int c=0;
        
        while(p1<p.size() && p2<t.size()){
            int d=abs(p[p1]-t[p2]);
            if(d<=k){
                c++;p1++;p2++;
            }
            else if(t[p2]>p[p1]){
                p1++;
            }
            else{
                p2++;
            }
        }
        return c;
        
    }
};