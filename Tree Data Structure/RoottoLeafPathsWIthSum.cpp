/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void recur(vector<vector<int> > &ans, vector<int> cur, int B, TreeNode* A){
    int x = A->val;
    cur.push_back(A->val);   
    if(A->left==NULL && A->right==NULL){
        if(B-x==0){
        ans.push_back(cur);
        }
        return;
    }
     
    if(A->left!=NULL && A->right!=NULL){
        recur(ans, cur, B-x, A->left);
        recur(ans, cur, B-x, A->right);
        return;
    }
    
    if(A->left!=NULL){
    recur(ans, cur, B-x, A->left);}
    else{
    recur(ans, cur, B-x, A->right);
    }
    
    return;
}
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<vector<int> > ans;
    if(A==NULL){
        return ans;
    }
    vector<int> cur;
    recur(ans, cur, B, A);
    return ans;
}

