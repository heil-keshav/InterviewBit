int Solution::evalRPN(vector<string> &A) {
        stack<int> B;
        for(int i=0; i<A.size(); i++){
            if(A[i].size()>1 || (A[i][0]!='+' && A[i][0] !='-' && A[i][0]!='*' && A[i][0] !='/')){
                int z = stoi(A[i]);
                B.push(z);
                //cout << z << endl;
            }
            else{
                int y = B.top();
                B.pop();
                int x = B.top();
                B.pop();
                int z;
                if(A[i][0]=='+'){
                    z=x+y;
                }
                else if(A[i][0]=='-'){
                    z=x-y;
                }
                else if(A[i][0]=='*'){
                    z=x*y;
                }
                else if(A[i][0]=='/'){
                    z=x/y;
                }
                
                B.push(z);
               // cout << z << endl;
            }
        }
        
        return B.top();
        
    }


