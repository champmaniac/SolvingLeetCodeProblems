class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*> parent_node;
        markParents(root,parent_node,target);
        unordered_map<TreeNode *, bool> visited;
        queue<TreeNode*> q;
        q.push(target);
        visited[target]=true;
        int cur_level =0; // Distance
        while(!q.empty()){   { /*Second BFS to go upto K level from target node and using our hashtable info*/
            int size =q.size();
            if(cur_level++==k) break;
            for(int i=0;i<size;i++){
                TreeNode * current = q.front();
                q.pop();
                if(current->left && !visited[current->left]){
                    q.push(current->left);
                    visited[current->left] =true;
                }
                if(current->right && !visited[current->right]){
                    q.push(current->right);
                    visited[current->right] =true;
                }
                if(parent_node[current] && !visited[parent_node[current]]){
                    q.push(parent_node[current]);
                    visited[parent_node[current]] =true;
                }
                
            }
        }
        vector<int> ans;
        while(!q.empty())
        {
            TreeNode * current = q.front();
            q.pop();
            ans.push_back(current->val);
        }
        return ans;
        
    }
    
    void markParents(TreeNode* root,unordered_map<TreeNode*, TreeNode*> &parent_node,TreeNode* target){
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){ { /*First BFS to get a track of parent nodes*/
            TreeNode * current = q.front();
            q.pop();
            if(current->left)
            {
                parent_node[current->left]=current;
                q.push(current->left);
            }
            if(current->right)
            {
                parent_node[current->right] =current;
                q.push(current->right);
            }
        }
    }
};