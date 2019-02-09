/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::minDepth(TreeNode* A) {
    if(A->left==NULL && A->right==NULL){
        return 1;
    }
    
    if(A->left==NULL){
       return minDepth(A->right) + 1;
   }
   if(A->right==NULL){
       return minDepth(A->left) + 1;
   }
   
   
    return min(minDepth(A->left), minDepth(A->right)) + 1;
}

