class Solution {        // DFS Traversal --> TC O(n) SC O(1)
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL || root==p || root==q) // base
            return root;
        TreeNode *left = lowestCommonAncestor(root->left,p,q);
        TreeNode *right =lowestCommonAncestor(root->right,p,q);
        
        if(left==NULL) // only left null? then right
            return right;
        else if(right==NULL) // only right null? then left
            return left;
        else                   // both not null? we found the result
            return root;
    }
};