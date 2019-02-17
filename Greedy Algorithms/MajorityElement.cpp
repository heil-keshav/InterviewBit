int Solution::majorityElement(const vector<int> &A) {
    int j=0;
    int count=1;
    for(int i=1; i<A.size();i++){
        if(A[i]==A[j]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            j=i;
            count=1;
        }
    }
    return A[j];
}

