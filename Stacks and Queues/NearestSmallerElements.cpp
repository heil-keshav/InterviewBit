vector<int> Solution::prevSmaller(vector<int> &A) {
        stack<int> B;
        vector<int> ans;
        ans.push_back(-1);
        B.push(A[0]);
        for(int i=1; i<A.size();i++){
            while(!B.empty()){
                if(A[i]>B.top()){
                    ans.push_back(B.top());
                    B.push(A[i]);
                    break;
                }
                else{
                B.pop();
                }
            }
            if(B.empty()){
                ans.push_back(-1);
                B.push(A[i]);
            }
        }
        
        return ans;
    }


