// User function Template for C++

/*
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
*/
int ans;
class Solution {
  public:
    // Function to find largest subtree sum.
    int findLargestSubtreeSum(Node* root) {
        // Write your code here
        ans=INT_MIN;
        sumBT(root);
        return ans;
    }
    int sumBT(Node* root) {
        // code here
        if(root==nullptr){
            return 0;
        }
        int l=sumBT(root->left);
        int r=sumBT(root->right);
        ans=max(ans,l+r+root->data);
        return root->data +l+r;
    }
};
