class Solution {
public:
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(t==NULL)
            return true;
        if(s==NULL)
            return false;
        if(helper(s,t))
            return true;
        return isSubtree(s->left,t) || isSubtree(s->right,t);
        
    }
    bool helper(TreeNode* s, TreeNode* t){
        if(s==NULL && t==NULL)
            return true;
        if(s==NULL || t==NULL)
            return false;
        return (s->val == t->val && helper(s->left,t->left) && helper(s->right,t->right));
        
    }
};