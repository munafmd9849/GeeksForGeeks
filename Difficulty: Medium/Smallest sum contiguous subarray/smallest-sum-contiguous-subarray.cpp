//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int smallestSumSubarray(vector<int>& a) {
        int n=a.size();
        long sum=0;
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(sum<ans){
                ans=sum;
            }
            if(sum>0){
                sum=0;
            }
        }
        return ans;
        
    }
};



//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        Solution ob;
        
        int ans = ob.smallestSumSubarray(a);
        
        cout<<ans<<endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends