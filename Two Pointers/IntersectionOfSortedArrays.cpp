vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    vector<int> ans;
    int j=0;
    for(int i=0; i<A.size() && j<B.size(); i++){
        while(j<B.size() && A[i]>B[j]){
            j++;
        }
        if(j<B.size() && A[i]==B[j]){
            ans.push_back(A[i]);
            j++;
        }
    }
    return ans;
}
