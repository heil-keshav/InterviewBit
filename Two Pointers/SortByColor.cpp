void Solution::sortColors(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int count1=0, count2=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==0){
            count1++;
        }
        else if(A[i]==1){
            count2++;
        }
    }
    for(int i=0;i<A.size();i++){
        if(count1>0){
            A[i]=0;
            count1--;
        }
        else if(count2>0){
            A[i]=1;
            count2--;
        }
        else{
            A[i]=2;
        }
    }
}


/*   Method 2  - One Pass

void Solution::sortColors(vector<int> &A) {
    int j=0, k=A.size()-1;
    while(A[j]==0 && j<A.size()){
        j++;
    }
    for(int i=j;i<=k && i>=0;i++){
        if(A[i]==0){
            A[i]=A[j];
            A[j]=0;
            j++;
        }
        else if(A[i]==2){
            A[i]=A[k];
            A[k]=2;
            k--;
            i--;
        }
    }
    
}

*/
