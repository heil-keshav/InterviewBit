int Solution::lis(const vector<int> &A) {
    if (A.size() == 0) return 0;
    vector<int> dp(A.size(), 1);
    int ans=1;
    for(int i=1;i<A.size();i++){
        for(int j=i-1; j>=0;j--){
            if(A[j]<A[i]){
                dp[i]=max(dp[i],1+dp[j]);
            }
        }
        if(dp[i]>ans){
            ans =dp[i];
        }
    }
    
    return ans;
}

