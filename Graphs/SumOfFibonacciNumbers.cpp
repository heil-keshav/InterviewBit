int Solution::fibsum(int A) {
    //Without Extra Space
    int a=1;
    int b=1;
    while(a+b<=A){
        int temp=b;
        b=a+b;
        a=temp;
    }
    
    int count=0;
    while(A>0){
        while((A-b)>=0){
        A=A-b;
        count++;
        }
        int temp=a;
        a= b-a;
        b=temp;
        
    }
    
    return count;
}

