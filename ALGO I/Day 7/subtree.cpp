class Solution
{
public:
	bool isequal(TreeNode* r,TreeNode* s)
	{
		if(r==NULL)
		{
			if(s==NULL) return true;
			else return false;
		}
		if(s==NULL) return false;
		if(r->val!=s->val) return false;
		bool x=isequal(r->left,s->left);
		bool y=isequal(r->right,s->right);
		return x&&y;  
	}
	bool isSubtree(TreeNode* root, TreeNode* subRoot) 
	{
		 if(root==NULL)
		{
			if(subRoot==NULL) return true;
			else return false;
		}
		if(subRoot==NULL) return false;
		if(root->val==subRoot->val)
		{
			if(isequal(root,subRoot))
				return true;
		}
		bool a=isSubtree(root->left,subRoot);
		bool b=isSubtree(root->right,subRoot);
		return a||b;
	}
};