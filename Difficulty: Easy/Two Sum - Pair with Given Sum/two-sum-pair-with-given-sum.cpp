class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        sort(arr.begin(),arr.end());
        int p1=0,p2=arr.size()-1;
        
        while(p1<p2){
            if(arr[p1]+arr[p2]==target){
                return true;
            }
            else if(arr[p1]+arr[p2]>target){
                p2--;
            }
            else{
                p1++;
            }
        }
        return false;
    }
};