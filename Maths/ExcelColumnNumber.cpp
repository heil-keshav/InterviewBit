int Solution::titleToNumber(string A) {
    int ans=0;
    
    for(int i=0; i<A.size();i++){
        int x = A[i]-64;
        x = x*pow(26,(A.size()- i-1));
        ans = ans+x;
    }
    return ans;
}
