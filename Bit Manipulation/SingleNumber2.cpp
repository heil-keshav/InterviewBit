int Solution::singleNumber(const vector<int> &A) {
    int result=0;
    for(int i=0;i<32;i++){
        int x;
        x= 1<<i;
        int sum=0;
        for(int j=0; j<A.size();j++){
            if(A[j] & x){
                sum++;
            }
        }
        
        if(sum%3){
            result = result | x;
        }
    }
    return result;
}

