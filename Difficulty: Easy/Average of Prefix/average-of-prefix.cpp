//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    vector<int> prefixAvg(vector<int> &arr) {
        int n=arr.size();
        vector<int> avg(n);
        int avgsum=0;
        for(int i=0;i<n;i++){
            avgsum+=arr[i];
            avg[i]=int(avgsum/(i+1));
        }
        return avg;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream s1(input);
        int num;
        while (s1 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.prefixAvg(arr);

        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends