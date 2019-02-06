int Solution::uniquePaths(int A, int B) {
    int ans=1;
    for(int i=A; i<A+B-1;i++){
        ans = ans*i;
        ans = ans/(i-A+1);
    }
    return ans;
}

