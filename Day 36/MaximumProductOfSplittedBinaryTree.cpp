class Solution {      // TC O(N) SC O(height)
public:
    long res,total=0,sub;
    int maxProduct(TreeNode* root) {
        total =helper(root),helper(root);
        return res%(int)(1e9+7);
    }
    
    int helper(TreeNode* root){ //to get the sum of a sub tree.
        if(!root) return 0;
        sub = root->val + helper(root->left)+helper(root->right);
        res=max(res,sub*(total-sub));
        return sub;
    }
};