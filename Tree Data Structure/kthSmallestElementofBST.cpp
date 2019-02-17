/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::kthsmallest(TreeNode* A, int B) {
    stack<TreeNode *> S;
    TreeNode* temp=A;
    int count=0;
    while(temp!=NULL){
        S.push(temp);
        TreeNode* t = temp->left;
        temp->left=NULL;
        temp=t;
    }
    
    while(count!=B){
        temp=S.top();
        if(temp->left==NULL){
           S.pop();
           count++;
        }
        else{
            S.push(temp->left);
            temp->left=NULL;
            continue;
        }
        
        
        if(temp->right!=NULL){
            S.push(temp->right);
            temp->right=NULL;
        }
    }
    
    return temp->val;
}

