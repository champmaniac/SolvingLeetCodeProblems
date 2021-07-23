class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        return node == NULL? 0:1 + max(height(node->left),height(node->right));
    }
};