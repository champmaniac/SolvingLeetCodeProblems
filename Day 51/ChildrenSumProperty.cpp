Class Solution{
	void changeTree(BinaryTreeNode<int>* root){
		if(!root)
			return 0;
		int child=0;
		if(root->left)
			child+=root->left->val;
		if(root->right)
			chiild+=root->right->val;
		if(child>=root->val)
			root->val=child;
		else
		{
			if(root->left)
				root->left->val = root->val;
			else
				root->right->val =root->val;
		}

		reorder(root->left);
		reorder(root->right);

		int ans=0;
		if(root->left) ans+=root->left->val;
		if(root->right) ans+=root->right->val;
		if(root->left || root->right) 
			root->val = ans; // not leaf node as checked above then only it happens
	}
}