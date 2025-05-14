//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    long long subarraySum(vector<int>& arr) {
        const long long r = 1e9 + 7;
        int n = arr.size();
        long long ans = 0;
        for (int i = 0; i < n; ++i) {
            long long left = i + 1;
            long long right = n - i;
            long long con = (left * right) % r;
            con = (con * arr[i]) % r;
            ans = (ans + con) % r;
        }
        return ans;
    } 
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        long long res = obj.subarraySum(arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends