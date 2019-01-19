string Solution::longestCommonPrefix(vector<string> &A) {
    string ans = "";
    if(A.size()==0){
        return ans;
    }
    if(A.size()==1){
        return A[0];
    }
    ans=A[0];
    for(int i=1;i<A.size();i++){
        string temp="";
        for(int j=0;j<ans.size() && j<A[i].size();j++){
            if(A[i][j]==ans[j]){
                temp=temp+ans[j];
            }
        }
        ans = temp;
    }
    
    return ans;
}

