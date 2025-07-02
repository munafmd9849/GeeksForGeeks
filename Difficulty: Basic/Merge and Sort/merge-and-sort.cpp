// Write your code here


class Solution {
  public:
    vector<int> mergeNsort(vector<int>& a, vector<int>& b) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        vector<int> res;
        unordered_set<int> t;
        int m=a.size(),n=b.size();
        int i=0,j=0,k=0;
        while(i<m && j<n){
            if(a[i]<b[j]){
                if(t.find(a[i])==t.end())
                    res.push_back(a[i]);
                t.insert(a[i++]);
            }
            else{
                if(t.find(b[j])==t.end())
                    res.push_back(b[j]);
                t.insert(b[j++]);
            }
        }
        
        while(i<m){
            if(t.find(a[i])==t.end())
                    res.push_back(a[i]);
            t.insert(a[i++]);
            
        }
        while(j<n){
            if(t.find(b[j])==t.end())
                    res.push_back(b[j]);
            t.insert(b[j++]);
            
        }
        
        return res;
        // Write your code here
    }
};