int row(vector<vector<int> > &A, int B, int start, int end){
    
    while(start<end){
    int mid = start + (end-start)/2;
    if(A[mid][0]==B){
        return mid;
    }
    else if(A[mid][0]<B){
        if(mid+1>end){
            return mid;
        }
        if(A[mid+1][0] >B){
            return mid;
        }
        start = mid+1;
    }
    else{
        if(mid+1>end){
            return mid;
        }
        if(A[mid+1][0] <B){
            return mid;
        }
        end = mid-1;
    }
    }
    
    return start;
}

int search(vector<vector<int> > &A, int B, int start, int end, int i){
    while(start<=end){
        int mid = start + (end-start)/2;
        if(A[i][mid]==B){
            return 1;
        }
        else if(A[i][mid]<B){
            start = mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return 0;
}




int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int r= row(A, B, 0, A.size()-1);
    return search(A, B, 0, A[r].size(), r);;
}

