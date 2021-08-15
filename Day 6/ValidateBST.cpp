class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return helper(root,NULL,NULL);
    }
    bool helper(TreeNode* &root,TreeNode* min,TreeNode* max){              // DFS 
        if(root==NULL)                                                     // TC --> O(N) Sc--> O(N)
            return true;
        if((min!=NULL && root->val<=min->val)||(max!=NULL && root->val>=max->val))
            return false;
        return helper(root->left,min,root) && helper(root->right,root,max);
        
    }
    
};