class Solution {
public:
    
    void reverse(TreeNode* root, int &count){
        if(!root)
            return;
        reverse(root->right,count);
        root->val+=count;
        count=root->val;
        reverse(root->left,count);
    }
    TreeNode* bstToGst(TreeNode* root) {
        int count=0;
        reverse(root,count);
        return root;
    }
};