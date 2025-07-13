
class Solution {
  public:

    string LargestEven(string s) {
        // complete the function here
        int mine=8;
        for(int i=0;i<s.size();i++){
            int tem=s[i]-48;
  
            if(tem%2==0){
                if(mine>tem){
                    mine=tem;
                }
            }
        }
        sort(s.begin(),s.end(),greater<int>());
        for(int i=s.size()-1;i>=0;i--){
            if((s[i]-48)%2==0){
                s.erase(s.begin()+i);
                s+=to_string(mine);
                break;
            }
        }
        return s;
        
        
    }
};