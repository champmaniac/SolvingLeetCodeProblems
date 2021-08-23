class Solution {
public:
    int res=0;
    int minCameraCover(TreeNode* root) {
        return (dfs(root)<1?1:0)+res;
    }
    int dfs(TreeNode* root){
        if(!root)
            return 2;
        int l = dfs(root->left);
        int r = dfs(root->right);
        if(l==0 || r==0){
            res++;
            return 1;
        }
        return l==1 || r==1?2:0;
        
    }
};