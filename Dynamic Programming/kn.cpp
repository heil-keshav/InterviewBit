#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>> test;
	for(int t=0;t<test;t++){
	    int N, K;
	    cin>> N >> K;
	    vector<int> dp(N ,0);
	    vector<int> dp2(N ,0);
	    for(int i=0; i<K;i++){
	        int x, y;
	        cin >> x >> y;
	        dp[x-1]=1;
	        dp2[y-1]=1;
	        
	    }
	    vector<int> ans;
	    for(int i=0; i<N;i++){
	        if(dp[i]==0){
	        for(int j=0; j<N;j++){
	            if(dp2[j]==0){
	                    ans.push_back(i+1);
	                    ans.push_back(j+1);
	                    dp[i]=1;
	                    dp2[j]=1;
	                    break;
	                }
	            }
	        }
	    }
	    
	    cout << ans.size()/2 << " ";
	    for(int i=0;i<ans.size();i++){
	        cout << ans[i] << " ";
	    }
        cout << endl;
	}
	return 0;
}

