class Solution {
public:
    unordered_map<int,vector<TreeNode*>>cache;
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*> res;
        if(cache[n].size()!=0)
            return cache[n];
        if(n==1){
            res.push_back(new TreeNode(0));
        }
        else{
            for(int i=1;i<n;i+=2){
                int l=i,r=n-i-1;
                for(TreeNode* left :allPossibleFBT(l)){
                    for(TreeNode* right: allPossibleFBT(r)){
                        TreeNode* root =new TreeNode(0);
                        root->left=left;
                        root->right=right;
                        res.push_back(root);
                    }
                }
            }
        }
        cache[n]=res;
        return res;
    }
};