int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(), A.end());
    int ans=INT_MAX;
    for(int i=0;i<A.size()-1;i++){
        if(ans>(A[i]^A[i+1])){
            ans=A[i]^A[i+1];
        }
    }
    return ans;
}

