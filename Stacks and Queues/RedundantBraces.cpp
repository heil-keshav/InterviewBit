int Solution::braces(string A) {
    stack<char> s;
    for(int i=0; i<A.size();i++){
        if(A[i]==')'){
            char x = s.top();
            s.pop();
            if(x=='('){
                return 1;
            }
            char sign = s.top();
            s.pop();
            if(sign=='('){
                return 1;
            }
            char y =s.top();
            s.pop();
            
            if(y=='('){
                s.push(int(x));
            }
            else{
                s.pop();
                // add any random char in place of x+y or x-y or x*y or x/z
                s.push('a');
            }
            
        }
        else{
            s.push(A[i]);
        }
    }
    
    
    return 0;
}

