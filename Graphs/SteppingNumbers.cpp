vector<int> Solution::stepnum(int A, int B) {
    vector<int> ans;
    queue<int> q;
    for(int i=1;i<10;i++){
        q.push(i);
    }
    if(A==0){
        ans.push_back(0);
    }
    while(!q.empty()){
        int x=q.front();
        q.pop();
        if(x>=A && x<=B){
            ans.push_back(x);
        }
        if(x>B){
            break;
        }
        
        int y=x%10;
        if(y==0){
            q.push(x*10 + y+1);
        }
        else if(y==9){
            q.push(x*10 + y-1);
        }
        else{
            q.push(x*10 + y-1);
            q.push(x*10 + y+1);
        }
        
    }
    
    return ans;
}

