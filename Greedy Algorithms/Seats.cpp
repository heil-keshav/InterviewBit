int Solution::seats(string A) {
    int MOD = 10000003;
    int count = 0;
    for(int i = 0; i < A.size(); i++){
        if(A[i] == 'x'){
            count++;
        }
    }
    
    int mid = 0;
    for(int i = 0; i < A.size(); i++){
        if(A[i] == 'x'){
            mid++;
            if(mid == (count/2)+1){
                mid = i;
                break;
            }
        }
    }
    
    int ans=0;
    int i=mid+1;
    while(i<A.size() && A[i]=='x'){
            i++;
    }
    int j = i;
    i++;
    while(i<A.size() && A[j]=='.'){
        if(A[i]=='x'){
            ans = ans + (i-j)%MOD;
            ans = ans%MOD;
            A[j]='x';
            j++;
            A[i]='.';
        }
        i++;
    }
    
    i = mid-1;
    while(i>=0 && A[i]=='x'){
        i--;
    }
    j=i;
    i--;
    while(i>=0 && A[j]=='.'){
        if(A[i]=='x'){
            ans = ans + (j-i)%MOD;
            ans = ans%MOD;
            A[j]='x';
            j--;
            A[i]='.';
        }
        i--;
    }
    
 return ans;   
}

