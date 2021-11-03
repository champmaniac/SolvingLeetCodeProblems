class Solution {
private:
    int sum;
public:
    int sumNumbers(TreeNode* root) {
        if(!root)
            return 0;
        sum=0;
        dfs(root,0);
        return sum;
        
    }
    void dfs(TreeNode *&node, int CurrSum){
        CurrSum=CurrSum*10+node->val;
        if(!node->left && !node->right)
            sum+=CurrSum;
        if(node->left)
            dfs(node->left,CurrSum);
        if(node->right)
            dfs(node->right,CurrSum);
    }
};