int Solution::trailingZeroes(int A) {
    int ans=0, num=5;
     while(A/num>0){
        ans =ans+ A/num;
        num=num*5;
    }
    return ans;
}
