
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Complete the function
        int p1=0,p2=arr.size()-1,c=0;
        
        while(p1<p2){
            if(arr[p1]+arr[p2]==target){
                c++;
                int i=p1+1,j=p2-1;
                while(i<p2 && arr[i]==arr[p1]){
                    c++;
                    i++;
                }
                while(j>p1 && arr[j]==arr[p2]){
                    c++;
                    j--;
                }
                p1++;p2--;
            }
            else if(arr[p1]+arr[p2]>target){
                p2--;
            }
            else{
                p1++;
            }
        }
        return c;
    }
};