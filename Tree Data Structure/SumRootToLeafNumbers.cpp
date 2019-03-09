/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void recur(TreeNode* A, long long int &sum, long long int current){
    current = current*10;
    current += A->val;
    current = current%1003;
    if(A->left==NULL && A->right==NULL){
        sum = sum + current;
        sum = sum%1003;
        return;
    }
    else if(A->left!=NULL && A->right==NULL){
        recur(A->left, sum ,current);
    }
    else if(A->left==NULL && A->right!=NULL){
        recur(A->right, sum ,current);
    }
    else{
    recur(A->left, sum, current);
    recur(A->right, sum, current);
    }
} 
 
int Solution::sumNumbers(TreeNode* A) {
    if(A==NULL){
        return 0;
    }
    long long int sum=0;
    long long int current=0;
    recur(A,sum,current);
    return sum;
}

