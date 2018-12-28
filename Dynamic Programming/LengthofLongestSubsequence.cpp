int Solution::longestSubsequenceLength(const vector<int> &A) {
    vector<int> inc(A.size(), 1);
    vector<int> dec(A.size(), 1);
    int ans=0;
   
    for(int i=1; i<A.size();i++){
        for(int j=i-1;j>=0;j--){
            if(A[j]<A[i] && inc[i]<inc[j]+1){
                inc[i]=inc[j]+1;
            }
        }
    }
    
    for(int i=A.size()-2; i>=0;i--){
        for(int j=i+1;j<A.size();j++){
            if(A[j]<A[i] && dec[i]<dec[j]+1){
                dec[i]=dec[j]+1;
            }
            
        }
    }
    
    for(int i=0;i<A.size();i++){
        ans = max(ans, inc[i]+dec[i]-1);
    }
    
 
 return ans;   
}
