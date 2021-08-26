class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        maxSum(root,maxi);
        return maxi;
    }
private:
    int maxSum(TreeNode* node,int& maxi){
        if(node==NULL)return 0;
        int leftSum = max(0,maxSum(node->left,maxi));
        int rightSum = max(0,maxSum(node->right,maxi));
        maxi = max(maxi,leftSum+rightSum+node->val);
        
        return max(leftSum,rightSum)+node->val;
    }
};