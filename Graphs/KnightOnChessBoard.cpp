int Solution::knight(int A, int B, int C, int D, int E, int F) {
    queue<pair<int, int>>q;
    vector<vector<int>> board(A+1, vector<int>(B+1, -1));
    q.push(make_pair(C,D));
    board[C][D]=0;
    int dx[8]= {1, 2, 2, 1, -1, -2, -1, -2};
    int dy[8]= {2, 1, -1, -2, 2, 1, -2, -1};
    while(!q.empty()){
        pair<int, int> p = q.front();
        q.pop();
        if(p.first==E && p.second==F){
            return board[p.first][p.second];
        }
        for(int i=0;i<8;i++){
            int x = p.first + dx[i];
            int y = p.second + dy[i];
            if(x<=A && y<=B && x>=1 && y>=1){
                if(board[x][y]==-1){
                q.push(make_pair(x,y));
                board[x][y]=board[p.first][p.second] + 1;
                }
            }
        }
        
    }
    
    return board[E][F];
}

