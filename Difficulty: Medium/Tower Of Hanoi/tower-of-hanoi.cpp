class Solution {
  public:
  int count=0;
    int towerOfHanoi(int n, int from, int to, int aux) {
        // code here
        return (1<<n) -1;
        
    }
};
        //(time complexity of the recursive relationn is  2^n)
        // if(n==0){
        //     return 0;
        // }
        // count+=towerOfHanoi(n-1,form,aux,to);
        // count+=towerOfHanoi(n-1,aux,to,from);
        // return count;