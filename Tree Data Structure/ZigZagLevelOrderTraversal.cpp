/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    stack<TreeNode*> s;
    stack<TreeNode*> t;
    vector<vector<int> > ans;
    s.push(A);
    
    while(!s.empty() || !t.empty()){
        vector<int> cur;
        while(!s.empty()){
            TreeNode* temp =s.top();
            s.pop();
            if(temp->left!=NULL){
                t.push(temp->left);
            }
            if(temp->right!=NULL){
                t.push(temp->right);
            }
            cur.push_back(temp->val);
        }
        if(cur.size()!=0){
        ans.push_back(cur);
        cur.clear();
        }
        while(!t.empty()){
            TreeNode* temp =t.top();
            t.pop();
            if(temp->right!=NULL){
                s.push(temp->right);
            }
            if(temp->left!=NULL){
                s.push(temp->left);
            }
            cur.push_back(temp->val);
        }
        if(cur.size()!=0){
        ans.push_back(cur);
        cur.clear();
        }
    
    }
    return ans;
}
