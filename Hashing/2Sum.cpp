vector<int> Solution::twoSum(const vector<int> &A, int B) {
    vector<int> ans;
    unordered_map<int, int> H;
    for(int i=0; i<A.size();i++){
        if(H.find(B-A[i])!=H.end()){
            ans.push_back(H[B-A[i]]);
            ans.push_back(i+1);
            return ans;
        }
        
        if(H.find(A[i])==H.end()){
            H[A[i]] = i+1;
        }
    }
    
    return ans;
}

