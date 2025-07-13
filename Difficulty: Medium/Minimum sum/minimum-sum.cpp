class Solution {
  public:
    string add(string a,string b){
        int n1=a.size(),n2=b.size();
        int i=n1-1,j=n2-1,carry=0;
        string res="";
        while(i>=0 || j>=0 || carry){
            int sum=carry;
            if(i>=0){
                sum+=a[i--]-48;
            }
            if(j>=0){
                sum+=b[j--]-48;
            }
            carry=sum/10;
            res+=(sum%10)+'0';
        }
        reverse(res.begin(),res.end());
        return res;
    }
    
    string minSum(vector<int> &arr) {
        // code her
        sort(arr.begin(),arr.end());
        int n=arr.size();
        string n1="";
        string n2="";
        for(int i=0;i<n;i+=2){
            n1+=to_string(arr[i]);
        }
        for(int j=1;j<n;j+=2){
            n2+=to_string(arr[j]);
        }
        string result=add(n1,n2);
        result.erase(0, result.find_first_not_of('0'));
        return result;
    }
};
 
//  int i=0;
//         while(result[i]==0 && i<result.size()){
//             if(result[i]==0){
//                 result.erase(result[i]);
//             }
//             cout<<"\n"<<i;
//             i++;
//         }
        
//         for(int i=0;;i++){
//             if(result[i]!=0){
//                 break;
//             }
//             else{
//                 result.erase()
//             }
//         }
