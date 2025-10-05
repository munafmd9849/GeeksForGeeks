class Solution {
    public String reverseWords(String s) {
        // Code here
        String [] strArr=s.split("\\.");
        int t=0;
        StringBuilder ans=new StringBuilder();
        
        for(int i=strArr.length-1; i>=0; i--){
            if(ans.length()==0){
                if(strArr[i].length()>0){
                    ans.append(strArr[i]);
                }
            }
            else{
                if(strArr[i].length()>0){
                    ans.append("."+strArr[i]);
                }
            }
        }
        
        return ans.toString();
        
        
    }
}
