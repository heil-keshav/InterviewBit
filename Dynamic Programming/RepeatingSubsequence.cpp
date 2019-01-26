int Solution::anytwo(string A) {
    vector<int> dp(A.size(), -1);
    for(int i=0;i<A.size();i++){
        for(int j=i+1;j<A.size();j++){
        if(A[i]==A[j]){
            dp[i]=j;
            break;
        }
        }
    }
    
    for(int i=0;i<A.size();i++){
        for(int j=i+1;j<A.size();j++){
        if(dp[i]!=-1){
            if(dp[i]<dp[j]){
                return 1;
            }
        }
    }
    }
    
    return 0;
}

