int Solution::candy(vector<int> &A) {
    vector<int> B(A.size(), 1);
    vector<int> C(A.size(), 1);
    for(int i=1;i<A.size();i++){
        if(A[i]>A[i-1]){
            B[i] += B[i-1];
        }
    }
    
    for(int i=A.size()-2; i>=0;i--){
        if(A[i]>A[i+1]){
            C[i] += C[i+1];
        }
    }
    
    int count=0;
    for(int i=0;i<A.size();i++){
        count += max(B[i], C[i]);
    }
    
    
    return count;
}
