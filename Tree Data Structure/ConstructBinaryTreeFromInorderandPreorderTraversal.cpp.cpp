/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 

TreeNode* recur(vector<int> &A, vector<int> &B, int as, int ae, int bs, int be){
    if(as>ae){
        return NULL;
    }
    TreeNode* root = new TreeNode(A[as]);
    int i=bs;
    for(; i<=be;i++){
        if(B[i]==A[as]){
            break;
        }
    }
    
    root->left = recur(A, B, as+1, as +i-bs, bs, i-1);
    root->right = recur(A, B, as+i-bs+1, ae, i+1, be);
    
    return root;
} 
 
TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
    
    return recur(A, B, 0, A.size()-1, 0 , B.size()-1);
}

