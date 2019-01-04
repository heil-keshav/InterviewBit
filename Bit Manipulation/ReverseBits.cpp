unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    unsigned int B=0;
    int count=31;
    while(count>=0){
        int x = (A&1)<<count;
        A=A>>1;
        B = B | x;
        count--;
    }
    return B;
}

