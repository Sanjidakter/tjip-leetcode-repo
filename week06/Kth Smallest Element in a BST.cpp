class Solution {
public:
//TC:O(N)
//SC:O(1)
    int runInorder(TreeNode* root, int &k) {
        if(!root) return -1;
        int L= runInorder(root->left,k);
        k--;
        if(k==0)
        {
          return root->val;
        }
        int R = runInorder(root->right,k);
        
        return max(L,R);
    }
    int kthSmallest(TreeNode* root, int k) {
       
       return runInorder(root,k);
       
    }
};