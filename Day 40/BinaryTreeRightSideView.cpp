class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>view;
        if(!root)
            return view;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* node= q.front();
                q.pop();
                if(i==n-1)
                    view.push_back(node->val);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
        }
        return view;
    }
};