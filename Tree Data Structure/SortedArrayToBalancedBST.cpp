/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* solve(const vector<int> &A, int start, int end){
    if(start>end){
        return NULL;
    }
    int mid  = start + (end-start)/2;
    TreeNode* root = new TreeNode(A[mid]);
    root->left = solve(A, start, mid-1);
    root->right = solve(A, mid+1, end);
    
    return root;
} 
 
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    return solve(A, 0, A.size()-1);
}

