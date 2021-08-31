class Solution {
public:
    // vector<int> rightSideView(TreeNode* root) {
    //     vector<int> ans;
    //     if(!root)
    //         return ans;
    //     queue<TreeNode*> q;
    //     q.push(root);
    //     while(!q.empty()){
    //         int size=q.size();
    //         for(int i=0;i<size;i++){
    //             TreeNode * node = q.front();
    //             q.pop();
    //             if(i==size-1)
    //                 ans.push_back(node->val);
    //             if(node->left)
    //                 q.push(node->left);
    //             if(node->right)
    //                 q.push(node->right);
    //         }
    //     }
    //     return ans;
    // }

    void dfs(TreeNode* root, int level, vector<int>&res){
        if(!root)
            return;
        if(res.size()==level) res.push_back(root->val);
        dfs(root->right,level+1,res);
        dfs(root->left,level+1,res);
    }

    vector<int> rightSideView(TreeNode* root){
        vector<int> res;
        dfs(root,0,res);
        return res;
    }
};