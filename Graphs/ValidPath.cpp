string Solution::solve(int A, int B, int C, int D, vector<int> &E, vector<int> &F) {
    vector<vector<int>> grid(A+1, vector<int>(B+1, 0));
    queue<pair<int,int>> q;
    q.push(make_pair(0,0));
    int dx[8]={1, 1, 1, 0, 0, -1, -1, -1};
    int dy[8]={1, -1, 0, 1, -1, 1, 0, -1};
    
    for(int i=0; i<=A; i++){
        for(int j=0; j<=B;j++){
            for(int k=0; k<E.size(); k++){
                if(ceil(sqrt(pow((E[k]-i),2) +pow((F[k]-j),2))) <=D){
                    grid[i][j]=-1;
                }
            }
        }
    }
    
    if(grid[0][0]==-1 || grid[A][B]==-1){
        return "NO";
    }
    grid[0][0]==1;
    while(!q.empty()){
        pair<int, int> p =q.front();
        int x=p.first;
        int y=p.second;
        q.pop();
        for(int i=0;i<8;i++){
            if(x+dx[i] >=0 && x+dx[i]<=A && y+dy[i] >=0 && y+dy[i] <=B){
                if(grid[x+dx[i]][y+dy[i]]==0){
                    q.push(make_pair(x+dx[i], y+dy[i]));
                    grid[x+dx[i]][y+dy[i]]=1;
                }
            }
        }
    }
    
    if(grid[A][B]==1){
        return "YES";
    }
    else{
        return "NO";
    }
}
