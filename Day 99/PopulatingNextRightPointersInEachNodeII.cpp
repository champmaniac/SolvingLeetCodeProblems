class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return NULL;
        queue<Node*> q{{root}};
        while(!q.empty()){
            for(int i=0,n=q.size();i<n;i++){
                auto cur = q.front();
                q.pop();
                if(i<n-1)
                    cur->next = q.front();
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
        }
        return root;
    }
};