int Solution::mice(vector<int> &A, vector<int> &B) {
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int ans=0;
    for(int i=0; i<A.size();i++){
        if(abs(A[i]-B[i])>ans){
            ans = abs(A[i]-B[i]);
        }
    }
    
    return ans;
}

