class Solution {
public:
    bool solve(TreeNode * child1, TreeNode * child2)
    {    
        if(child1 == NULL && child2 == NULL)
            return true; 
		
        else if(child1 == NULL || child2 == NULL || child1->val != child2->val)
            return false; 
        
        return solve(child1->left, child2->right) && solve(child1->right, child2->left);
    }
    
    bool isSymmetric(TreeNode* root) 
    {
        return solve(root->left, root->right);     
    }
};