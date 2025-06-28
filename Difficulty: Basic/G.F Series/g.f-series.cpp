// User function Template for C++
class Solution {
  public:
    void gfSeries(int n) {
        // Write Your Code here
        
        vector<long long> a(n);
        a[0]=0;
        a[1]=1;
        print(a,n-1);
        for(long long i:a){
            cout<<i<<" ";
        }
        cout<<endl;
    
    }
    long long print(vector<long long> &a , int n){
        
        if(n==1){
            return -1;
        }
        
        long long t=print(a,n-1);
        a[n]=t;
        return (a[n-1]*a[n-1]) -a[n];
        
        
    }
 };

//         if(n==1){
//             cout<<0<<" "<<n<<" ";
//             return;
//         }