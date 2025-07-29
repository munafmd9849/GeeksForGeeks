class Solution {
  public:
    // Function to find all pairs with given sum.
    vector<pair<int, int>> allPairs(int k, vector<int> &arr1, vector<int> &arr2) {
        // Code here
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end(),greater<int>());
        int n=arr1.size();
        int m=arr2.size();
        vector<pair<int,int>> ans;
        int p1=0,p2=0;
        while(p1<n && p2<m){
            if(arr1[p1]+arr2[p2]==k){
                int cp1=0;
                int i=p1;
                while(i<n && arr1[i]==arr1[p1]){
                    cp1++;
                    i++;
                }
                int cp2=0;
                int j=p2;
                while(j<m && arr2[j]==arr2[p2]){
                    cp2++;
                    j++;
                }
                for(int i=1;i<=cp1*cp2;i++){
                    
                    ans.push_back({arr1[p1],arr2[p2]});         
                }
                
                p1=i;
                p2=j;
                
                if(p1==n || p2==m){
                    break;
                }
            }
            else{
                if(arr1[p1]+arr2[p2]>k){
                    p2++;
                    
                }
                else{
                    p1++;
                }
                if(p1==n || p2==m){
                    break;
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};