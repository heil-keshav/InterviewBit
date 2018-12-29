int Solution::gcd(int A, int B) {
    if(A==0){
        return B;
    }
    if(B==0){
        return A;
    }
     if(A==B){
        return A;
    }
    if(A<B){
        return gcd(A, B-A);
    }
    return gcd(B, A-B);
}
