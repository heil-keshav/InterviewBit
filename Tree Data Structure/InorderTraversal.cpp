/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    
    vector<int> ans;
    stack<TreeNode*> B;
    B.push(A);
    while(!B.empty()){
        TreeNode* temp=B.top();
        if(temp->left==NULL){
            ans.push_back(temp->val);
            B.pop();
            if(temp->right!=NULL){
                B.push(temp->right);
            }
        }
        else{
            B.push(temp->left);
            temp->left=NULL;
        }
    }
    
    return ans;
}

