//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    void reverse(vector<int>& a, int l, int r) {
        while (l < r) {
            int temp = a[l];
            a[l++] = a[r];
            a[r--] = temp;
        }
    }

    void leftRotate(vector<int>& a, int d) {
        int n = a.size();
        d = d % n;
        reverse(a, 0, n - 1);
        reverse(a, 0, n - d - 1);
        reverse(a, n - d, n - 1);
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore(); // Ignore the newline character after d
        Solution ob;
        ob.leftRotate(arr, d);
        for (int x : arr) {
            cout << x << " ";
        }
        cout << "\n";
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends