/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    queue<TreeNode *> q1;
    queue<TreeNode *> q2;
    vector<vector<int>> ans;
    if(A==NULL){
        return ans;
    }
    q1.push(A);
    while(!q1.empty() || !q2.empty()){
        vector<int> cur;
        if(!q1.empty()){
            while(!q1.empty()){
                TreeNode* temp =q1.front();
                q1.pop();
                cur.push_back(temp->val);
                if(temp->left!=NULL){
                    q2.push(temp->left);
                }
                if(temp->right!=NULL){
                    q2.push(temp->right);
                }
            }
        }
        else{
            while(!q2.empty()){
                TreeNode* temp =q2.front();
                q2.pop();
                cur.push_back(temp->val);
                if(temp->left!=NULL){
                    q1.push(temp->left);
                }
                if(temp->right!=NULL){
                    q1.push(temp->right);
                }
            }
        }
        
        ans.push_back(cur);
        cur.clear();
    }

return ans;
}

