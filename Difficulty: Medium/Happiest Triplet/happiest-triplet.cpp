class Solution {
  public:
    vector<int> smallestDifferenceTriplet(vector<int>& arr1, vector<int>& arr2,
                                          vector<int>& arr3) {
        // code here.
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        sort(arr3.begin(),arr3.end());
        int n=arr1.size();
        vector<int> a(3);
        int i=0,j=0,k=0;
        int ans=INT_MAX;
        while(i<n && j<n && k<n){
            int maxi=max({arr1[i],arr2[j],arr3[k]});
            int mini=min({arr1[i],arr2[j],arr3[k]});
            int diff=maxi-mini;
            if(ans>diff){
                a[0]=arr1[i];
                a[1]=arr2[j];
                a[2]=arr3[k];
                ans=min(ans,diff);  
            }
            else if(ans==diff){
                int prevsum=a[0]+a[1]+a[2];
                int currentsum=arr1[i]+arr2[j]+arr3[k];
                if(currentsum<prevsum){
                    a[0]=arr1[i];
                    a[1]=arr2[j];
                    a[2]=arr3[k];
                    ans=min(ans,diff);
                } 
            }
            
            if(arr1[i]<=arr2[j] && arr1[i]<=arr3[k]){
                i++;
            }
            else if(arr2[j]<=arr1[i] && arr2[j]<=arr3[k]){
                j++;
            }
            else if(arr3[k]<=arr1[i] && arr3[k]<=arr2[j]){
                k++;
            }
        }
        sort(a.begin(),a.end(),greater<int>());
        return a;
    }
};