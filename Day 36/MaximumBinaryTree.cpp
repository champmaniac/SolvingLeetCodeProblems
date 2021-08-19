
class Solution {
private:
    TreeNode* construct(vector<int>& nums,int s,int e){
        if(s>e) return nullptr;
        if(s==e) return new TreeNode(nums[s]);
        int idx =findmax(nums,s,e);
        TreeNode* root = new TreeNode(nums[idx]);
        root->left =construct(nums,s,idx-1);
        root->right=construct(nums,idx+1,e);
        return root;
    }
    int findmax(vector<int>& nums,int s,int e){
        int max=INT_MIN;
        int idx=-1;
        for(int i=s;i<=e;i++){
            if(nums[i]>max){
                max=nums[i];
                idx=i;
            }
        }
        return idx;
    }
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        TreeNode* root = construct(nums,0,nums.size()-1);
        return root;
    }
};