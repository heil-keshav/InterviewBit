/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    if(A->next==NULL || A==NULL){
        return A;
    }
    ListNode* temp=A->next;
    ListNode* prev = A;
    
    while(temp!=NULL){
        if(prev->val == temp->val){
            prev->next = temp->next;
        }
        else{
            prev = temp;
        }
        temp = temp->next;
    }
    
    return A;
}

