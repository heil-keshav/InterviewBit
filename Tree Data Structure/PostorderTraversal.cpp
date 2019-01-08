/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* A) {
    stack<TreeNode*> B;
    vector<int> ans;
    B.push(A);
    while(!B.empty()){
        TreeNode* temp = B.top();
        if(temp->left==NULL && temp->right==NULL){
            ans.push_back(temp->val);
            B.pop();
        }
        else{
        if(temp->right!=NULL){
            B.push(temp->right);
            temp->right=NULL;
        }
        if(temp->left!=NULL){
            B.push(temp->left);
            temp->left=NULL;
        }
        }
    }
    return ans;
}

