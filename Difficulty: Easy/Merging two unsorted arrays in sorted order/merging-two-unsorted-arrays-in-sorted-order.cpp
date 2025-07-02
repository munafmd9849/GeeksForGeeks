// Your code goes hereclass Solution{

class Solution {
  public:
    void sortedMerge(vector<int>& nums1, vector<int>& nums2, vector<int>& ms) {
        // Your code goes here
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int m=nums1.size(),n=nums2.size();
        int i=0,j=0,k=0;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                ms[k++]=nums1[i++];
            }
            else{
                ms[k++]=nums2[j++];
            }
        }
        while(i<m){
            ms[k++]=nums1[i++];
        }
        while(j<n){
            ms[k++]=nums2[j++];
        }
    }
};
