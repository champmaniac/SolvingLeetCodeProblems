/*
RECURSION
If root->val > val, recusion on the right.
Else, put right subtree on the left of new node TreeNode(val)
*/
// class Solution {      // TC O(N) SC O(N)     // RECURSION
// public:
    // TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
    //     if (root && root->val > val) {
    //         root->right = insertIntoMaxTree(root->right, val);
    //         return root;
    //     }
    //     TreeNode* node = new TreeNode(val);
    //     node->left = root;
    //     return node;        
    // }
    
    
    
// };

/*
ITERATION   
Search on the right, find the node that cur->val > val > cur->right->val
Then create new node TreeNode(val),
put old cur->right as node->left,
put node as new cur->right.
*/




class Solution {      // TC O(N) SC O(1)     // ITERATION
public:
    TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
        TreeNode* node = new TreeNode(val), *cur = root;
        if(root->val<val){
            node->left=root;
            return node;
        }
        while(cur->right && cur->right->val > val ){
            cur=cur->right;
        }
        node->left=cur->right;
        cur->right =node;
        return root;
        
    } 
};