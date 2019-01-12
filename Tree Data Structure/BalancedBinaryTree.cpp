/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int height(TreeNode *A){
    if(A==NULL){
        return 0;
    }
    return max(height(A->left), height(A->right))+1;
}
int Solution::isBalanced(TreeNode* A){
    if(A==NULL){
        return 1;
    }
    if(A->left==NULL && A->right==NULL){
        return 1;
    }
    int lh = height(A->left);
    int rh  = height(A->right);
    
    if(abs(lh-rh)>1){
        return 0;
    }
    else{
        return isBalanced(A->left) && isBalanced(A->right);
    }
}

