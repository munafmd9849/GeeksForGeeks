
class Solution {
  public:
    int count(int a, int b, int n) {
        // code here
        vector<int> arr(b+1,2);
        arr[1]=1;
        for(int i=2;i<=b;i++){
            for(int j=2;j*i<=b;j++){
                arr[i*j]++;
            }
        }
        int c=0;
        for(int i=a;i<=b;i++){
            if(arr[i]==n){
                c++;
            }
        }
        return c;
        
    }
};