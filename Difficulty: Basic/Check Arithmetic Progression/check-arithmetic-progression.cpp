class Solution {
  public:
    bool checkIsAP(vector<int> &arr) {
        // Your code goes here
        if(arr.size()<=2){
            return true;
        }
        sort(arr.begin(),arr.end());
        int d=arr[1]-arr[0];
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i+1]-arr[i]!=d){
                return false;
            }
            
        }
        return true;
    }
};