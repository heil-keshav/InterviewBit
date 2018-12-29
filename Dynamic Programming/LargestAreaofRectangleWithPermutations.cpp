int Solution::solve(vector<vector<int> > &A) {
    if(A.size()==0){
        return 0;
    }
    
    // i iterates over column and j over rows
    for(int i=0; i<A[0].size();i++){
        int count=0;
        for(int j=1; j<A.size();j++){
            if(A[j][i]==1){
                A[j][i] = A[j-1][i] + 1;
            }
        }
    }
    int ans=0;
   
    // i iterates over rows
    for(int i=0;i<A.size();i++){
        sort(A[i].begin(), A[i].end());
        
    }
  
    // i iterates over rows and j over columns
    for(int i=0;i<A.size();i++){
        int count =0;
        for(int j=A[i].size()-1; j>=0;j--){
            if(A[i][j]==0){
                break;
            }
            count++;
            if(count*A[i][j]>ans){
            ans = count*A[i][j];
            }
        }
    }
    return ans;
}

