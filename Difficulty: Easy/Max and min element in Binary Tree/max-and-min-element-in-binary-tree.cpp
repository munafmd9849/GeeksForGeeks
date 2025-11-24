/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

*/

class Solution {
  public:
    
    int findMax(Node *root) {
        // code here
        if(root==nullptr){
            return INT_MIN;
        }
        
        int l=findMax(root->left);
        int r=findMax(root->right);
        
        return max(max(root->data,l),r);
        
        
    }

    int findMin(Node *root) {
        if(root==nullptr){
            return INT_MAX;
        }
        
        int l=findMin(root->left);
        int r=findMin(root->right);
        
        return min(min(root->data,l),r);
    }
};