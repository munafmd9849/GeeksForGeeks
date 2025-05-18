//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    bool isSortedStrictly(const vector<int>& a) {
        bool increasing = true, decreasing = true;
        for (int i = 1; i < a.size(); ++i) {
            if (a[i] <= a[i - 1]) increasing = false; // strictly increasing: a[i] > a[i-1]
            if (a[i] >= a[i - 1]) decreasing = false; // strictly decreasing: a[i] < a[i-1]
        }
        return increasing || decreasing;
    }

    int sortedCount(int N, int M, vector<vector<int>> Mat) {
        int count = 0;
        for (int i = 0; i < N; ++i) {
            if (isSortedStrictly(Mat[i])) {
                count++;
            }
        }
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        cout << ob.sortedCount(N, M, Mat) << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends