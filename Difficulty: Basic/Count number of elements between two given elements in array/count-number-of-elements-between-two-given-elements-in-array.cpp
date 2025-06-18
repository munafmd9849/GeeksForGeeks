class Solution {
  public:
    int getCount(vector<int> &arr, int num1, int num2) {
        // Your code goes here.
        unordered_map<int ,int> um;
        int n=arr.size(), first;
        for(int i=0;i<n;i++){
            if(arr[i]==num1 && um.find(num1)==um.end()){
                um[arr[i]]=i;
                first=i;
                
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]==num2){
                um[arr[i]]=i;
            }
        }
        
        if(um.find(num1)==um.end() || um.find(num2)==um.end() || um[num2]==first)
            return 0;
        // return um[num2]-um[num1]-1;
        int c=0;
        for(int i=first+1;i<um[num2];i++){
            c++;
        }
        return c;
    }
};