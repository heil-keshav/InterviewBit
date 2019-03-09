int Solution::diffPossible(const vector<int> &A, int B) {
    unordered_map<int, int> M;
    for(int i=0; i<A.size();i++){
        if(M.find(B+A[i])!=M.end() || M.find(A[i]-B)!=M.end()){
            return 1;
        }
        else{
             M.insert(make_pair(A[i], i));
        }
    }
        
    return 0;
}

