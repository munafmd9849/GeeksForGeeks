//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    int shortestUnorderedSubarray(vector<int>& arr) {
        int pi=0;
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
                pi=i;
            }
        }
        return pi>0?3:0;
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
        int res = obj.shortestUnorderedSubarray(arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends