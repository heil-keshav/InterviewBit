string Solution::findDigitsInBinary(int A) {
    string ans;
    if(A==0){
        return "0";
    }
   
    int count=0;
    while(A-pow(2, count) >=0){
        count++;
    }
    count--;
    
    while(count>=0){
        if(A-pow(2, count)>= 0){
        A=A-pow(2, count);
        ans = ans + "1";
        }
        else{
            ans = ans + "0";
        }
        count--;
        
    }
    return ans;
}
