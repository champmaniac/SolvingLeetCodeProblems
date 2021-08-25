/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {        // Brute Force TC O(N2)
public:
//     int maxi=0;
//     int height(TreeNode* root){
//         if(!root)
//             return 0;
//         return max(height(root->left),height(root->right))+1;
//     }
//     int diameterOfBinaryTree(TreeNode* root) {
        
//         if(!root)
//             return 0;
//         int lh=height(root->left);
//         int rh=height(root->right);
//         maxi=max(maxi,lh+rh);
        
//         diameterOfBinaryTree(root->left);
//         diameterOfBinaryTree(root->right);
//         return maxi;
//     }
    
    int diameterOfBinaryTree(TreeNode* root) {  // Optimal  TC O(N)
        int diameter=0;
        height(root,diameter);
        return diameter;
    }
private:
    int height(TreeNode* root,int& diameter){
        if(!root)
            return 0;
        int lh=height(root->left,diameter);
        int rh= height(root->right,diameter);
        diameter= max(diameter,lh+rh);
        return 1+max(lh,rh);
    }
};