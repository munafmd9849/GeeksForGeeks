//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        int n=arr.size();
        long sum=0;
        vector<long> pf(n);
        for (int i = 0; i < n; ++i) {
            sum+=arr[i];
            pf[i]=sum;
        }
        if(sum%2!=0){
            return false;
        }
        for(int i=0;i<n-1;i++){
            if(pf[i]==sum/2){
                return true;
            }
        }
        return false;
        
        
        
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends