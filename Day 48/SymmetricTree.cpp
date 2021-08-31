class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return root==NULL || isSymmetricHelp(root->left,root->right);
    }
    bool isSymmetricHelp(TreeNode *left,TreeNode *right){
        if(!left || !right)
            return left==right;
        if(left->val!=right->val)
            return false;
        return isSymmetricHelp(left->left,right->right) && isSymmetricHelp(left->right,right->left);
        
    }
};