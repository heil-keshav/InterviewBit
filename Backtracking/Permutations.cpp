void recur(vector<vector<int> > &ans, vector<int> cur, vector<int> A){
    if(A.size()==0){
        ans.push_back(cur);
        return;
    }
    
    for(int i=0;i<A.size();i++){
        cur.push_back(A[i]);
        vector<int> B =A;
        B.erase(B.begin()+i);
        recur(ans, cur, B);
        cur.pop_back();
    }
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<vector<int> > ans;
    vector<int> cur;
    recur(ans, cur, A);
    return ans;
}

