int check(int a, int b){
    if(a==0 || a>2){
        return 0;
    }
    if(a==1 || b<7){
        return 1;
    }
    else{
    return 0;
    }
}


int Solution::numDecodings(string A) {
    vector<int> dp(A.size(), 0);
    // Right to left dp
    if(A[A.size()-1]-48!=0){
     dp[A.size()-1] = 1;
    }
    else{
        dp[A.size()-1] = 0;
    }

    for(int j=A.size()-2; j>=0;j--){
        if(A[j]-48==0){
            dp[j]=0;
        }
        else{
        dp[j] += dp[j+1] ;
        }
        if(check(A[j]-48, A[j+1]-48)){
            if(j+2 >= A.size()){
                dp[j]++;
            }
            else{
            dp[j] += dp[j+2];
            }
        }
    }
    
    return dp[0];
}

