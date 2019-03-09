bool check(char a){
    if((a>=48 && a<=57) || (a>=65 && a<=90) || (a>=97 && a<=122)){
        return true;
    } 
    
    return false;
}
int Solution::isPalindrome(string A) {
    int j=A.size()-1;
    for(int i=0;i<j;i++){
        if(!check(A[i])){
            continue;
        }
        if(!check(A[j])){
            j--;
            i--;
            continue;
        }
        
        if(A[i]>57){
        if(A[i]==A[j] || A[i]==(A[j]+32) || (A[i]+32)==A[j]){
            j--;
        }
        else{
            return 0;
        }
        }
        else if(A[i]<57 && A[i]==A[j]){
            j--;
        }
        else{
            return 0;
        }
    }
    
    
    return 1;
}

