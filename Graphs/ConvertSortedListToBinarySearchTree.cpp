/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
TreeNode* recur(ListNode** head, int n){
    if(n<=0){
        return NULL;
    }
    TreeNode* le = recur(head, n/2);
    TreeNode* root = new TreeNode((*head)->val);
    root->left = le;
    *head= (*head)->next;
    root->right = recur(head, n-n/2-1);
    
    return root;
}
TreeNode* Solution::sortedListToBST(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int count=0;
    ListNode* temp =A;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    
    return recur(&A, count);    
}

