//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> maxPrefixes(vector<int>& arr, vector<int>& leftIndex,
                            vector<int>& rightIndex) {
        int n = arr.size(), q = rightIndex.size();
    vector<int> pfsum(n);
    
    // Compute prefix sums
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        pfsum[i] = sum;
    }

    vector<int> ans(q);
    
    for (int j = 0; j < q; j++) {
        int l = leftIndex[j];
        int r = rightIndex[j];
        int maxPrefix = INT_MIN;

        for (int i = l; i <= r; i++) {
            int prefixSum;
            if (l == 0) {
                prefixSum = pfsum[i];
            } else {
                prefixSum = pfsum[i] - pfsum[l - 1];
            }

            if (prefixSum > maxPrefix) {
                maxPrefix = prefixSum;
            }
        }

        ans[j] = maxPrefix;
    }

    return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Consume the newline after t

    while (t--) {
        string line;

        // Read array
        getline(cin, line);
        stringstream ss(line);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }

        // Read queries
        getline(cin, line);
        stringstream ssl(line);
        vector<int> leftIndex, rightIndex;
        int left, right;
        while (ssl >> left)
            leftIndex.push_back(left);

        getline(cin, line);
        stringstream ssr(line);
        while (ssr >> right)
            rightIndex.push_back(right);

        Solution obj;
        vector<int> result = obj.maxPrefixes(arr, leftIndex, rightIndex);
        for (int i : result) {
            cout << i << " ";
        }
        cout << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends