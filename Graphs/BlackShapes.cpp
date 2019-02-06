int dx[4]= {1, 0, 0, -1};
int dy[4]= {0, 1, -1, 0};
    
void dfs(int i, int j, vector<string> &A){
    if(i>=A.size() || i<0 || j<0 || j>=A[i].size()){
        return;
    }
    if(A[i][j]=='O'){
        return;
    }
    else{
        A[i][j]='O';
    }
    for(int k=0; k<4;k++){
        dfs(i+dx[k], j+dy[k], A);
    }
    return;
}



int Solution::black(vector<string> &A) {
    int count=0;
    for(int i=0; i<A.size();i++){
        for(int j=0; j<A[i].size();j++){
            if(A[i][j]=='X'){
                dfs(i,j, A);
                count++;
            }
        }
    }
    
    return count;
}

