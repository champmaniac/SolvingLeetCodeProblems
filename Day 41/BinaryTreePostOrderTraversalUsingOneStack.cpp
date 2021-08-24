class Solution {
public:                // ONE STACK
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postOrder;
        if(!root)
            return postOrder;
        TreeNode* cur =root;
        stack<TreeNode*> st;
        while(cur!=NULL ||!st.empty()){
            if(cur!=NULL){
                st.push(cur);
                cur=cur->left;
            }
            else
            {   
                TreeNode* temp=st.top()->right;
                if(temp==NULL){
                    temp=st.top();
                    st.pop();
                    postOrder.push_back(temp->val);
                    while(!st.empty() && temp==st.top()->right){
                        temp=st.top();
                        st.pop();
                        postOrder.push_back(temp->val);
                    }
                }
                else
                    cur=temp;
            }
        }
        return postOrder;
    }
};