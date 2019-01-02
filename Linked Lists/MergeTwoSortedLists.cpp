/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* head;
    ListNode* temp;
    if(A->val < B->val){
        head = A;
        A=A->next;
    }
    else{
        head = B;
        B=B->next;
    }
    temp=head;
    while(A!=NULL && B!=NULL){
        if(A->val < B->val){
            temp->next = A;
            temp = temp->next;
            A=A->next;
        }
        else{
            temp->next=B;
            temp = temp->next;
            B=B->next;
        }
    }
    if(A==NULL){
        temp->next = B;
    }
    else if(B==NULL){
        temp->next=A;
    }
    
    return head;
}

