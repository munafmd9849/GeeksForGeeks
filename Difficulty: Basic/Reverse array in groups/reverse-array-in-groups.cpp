//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        int n=arr.size();
        if(k>=n){
            int l=0,r=n-1;
            while(l<r){
                int temp=arr[l];
                arr[l++]=arr[r];
                arr[r--]=temp;
            }
        }
        else{
            for (int i = 0; i < n; i += k) {
                int l = i;
                int r = min(i + k - 1, n - 1);
                while(l<r){
                    int temp=arr[l];
                    arr[l++]=arr[r];
                    arr[r--]=temp;
                }
            }
        }

        }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        vector<int> arr;
        string input;
        cin.ignore();
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        ob.reverseInGroups(arr, k);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends