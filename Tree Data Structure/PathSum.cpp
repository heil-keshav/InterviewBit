/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int recur(TreeNode* A, int sum){
     if(A==NULL){
         return 0;
     }
     if(A->val==sum){
         if(A->left==NULL && A->right==NULL){
             return 1;
         }
     }
     sum = sum - (A->val);
     return recur(A->left, sum) || recur(A->right, sum);
 }
int Solution::hasPathSum(TreeNode* A, int B) {
    return recur(A, B);
}

