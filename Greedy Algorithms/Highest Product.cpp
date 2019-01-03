// Alternate approach (linear time complexity) is to store 5 values.  3 maxs and 2 mins

int Solution::maxp3(vector<int> &A) {
    sort(A.begin(), A.end());
    int prod = A[A.size()-1]*A[A.size()-2]*A[A.size()-3];
    if(A[0]*A[1]*A[A.size()-1] > prod){
        prod = A[0]*A[1]*A[A.size()-1];
    }
    
    return prod;
}
