ListNode* Solution::rotateRight(ListNode* A, int B) {
    
    // List Size
    int size=0;
    ListNode* temp = A;
    while(temp!=NULL){
        temp=temp->next;
        size++;
    }
    
    if(B>size){
        B=B%size;
    }
    int count = size-B;
    if(count==size){
        return A;
    }
    
    
    temp=A;
    ListNode* final=A;
    
    // Find new first node
    while(count>0){
        if(count==1){
            final = temp->next;
            temp->next =NULL;
            break;
        }
        temp=temp->next;
        count--;
    }
    
    // Append the left ones to end
    temp=final;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = A;
    
    
    return final;
}

