/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    int count=0;
    ListNode* temp=A;
    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    if(B>count){
        return A->next;
    }
    int j=1;
    temp=A;
    if(count-B==0){
        return A->next;
    }
    while(j<(count-B)){
       temp = temp->next;
        j++;
    }
    temp->next = temp->next->next;
    
    return A;
}

