// >>>>>> Grid Paths : iterative<<<<<<<
#include <bits/stdc++.h>
using namespace std;

const int m = 1e9+7;
//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
int main(){
	#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
int n;	cin>>n;
vector<vector<char>> v(n,vector<char> (n));
for(int i=0;i<n;++i){
	for(int j=0;j<n;++j){
		cin>>v[i][j];		
	}
}

vector<vector<int>> dp(n,vector<int> (n,0));
dp[0][0]=1;

for(int i=0;i<n;++i){
	for(int j=0;j<n;++j){
		if(v[i][j]=='.')
		{
			if(i-1>=0) (dp[i][j] += dp[i-1][j]) %= m;	
			if(j-1>=0) (dp[i][j] += dp[i][j-1]) %= m;
		}
		else dp[i][j]=0;		
	}
}

cout<<dp[n-1][n-1];
}

// *********************************************************************
