class Solution {
    public :
    bool validateBST(TreeNode* root,long long L_min,long long R_max)
    {
        if(!root) return true;
       long long currval = root->val;
        if(currval>=R_max||currval<=L_min) return false;
        
        return validateBST(root->left,L_min,currval) &&  validateBST(root->right,currval,R_max);
    }
        bool isValidBST(TreeNode* root) {
        return validateBST(root,LLONG_MIN,LLONG_MAX);
    }
};