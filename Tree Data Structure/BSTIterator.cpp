/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
stack<TreeNode*> s;
TreeNode* cur = NULL;


BSTIterator::BSTIterator(TreeNode *root) {
   while(!s.empty()){
       s.pop();
   }
   
   cur =root;
   while(cur!=NULL){
       s.push(cur);
       cur = cur->left;
   }
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
    
    if(!s.empty()){
        return true;
    }
    
    return false;
}

/** @return the next smallest number */
int BSTIterator::next() {
    if(s.empty()){
        return -1;
    }
    
    cur = s.top();
    int ans = cur->val;
    s.pop();
    cur = cur->right;
    while(cur!=NULL){
        s.push(cur);
        cur=cur->left;
    }
    return ans;
}

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */

