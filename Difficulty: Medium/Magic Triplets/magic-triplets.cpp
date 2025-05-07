//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    int countTriplets(vector<int> nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
           int lCount=0,rCount=0;
            for(int j=i-1;j>=0;j--){
                if(nums[j]<nums[i]){
                    lCount++;
                }
            }
            for(int j=i+1;j<n;j++){
                if(nums[i]<nums[j]){
                    rCount++;
                }
            }
            count+=rCount*lCount;
        }
        return count;
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans = ob.countTriplets(nums);
		cout << ans << "\n";
	
cout << "~" << "\n";
}  
	return 0;
}
// } Driver Code Ends