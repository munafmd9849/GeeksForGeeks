//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int minDist(vector<int>& a, int x, int y) {
        int n=a.size();
        int X=-1;
        int Y=-1;
        int res=INT_MAX;
        for(int i=0;i<n;i++){
            if(a[i]==x){
                X=i;
            }
            if(a[i]==y){
                Y=i;
            }
            if(X!=-1 && Y!=-1){
                res=min(res,abs(X-Y));
            }
        }
        if(res==INT_MAX){
            return -1;
        }
        return res;
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
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int x, y;
        cin >> x >> y;
        cin.ignore();
        Solution obj;
        cout << obj.minDist(arr, x, y) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends