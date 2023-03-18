// >>>>>> minimising coins : iterative <<<<<<<

#include <bits/stdc++.h>
using namespace std;

// dp[i] = inf
// dp[i] = min. no. of coins to make sum==x;
// dp[i] = min(dp[i],dp[i-cx]+1);
// final sp = dp[x];

 
//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
int main(){
	#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
int n,x;		cin>>n>>x;
vector<int> c(n);
for(int i=0;i<n;++i) cin>>c[i];

// note : here i am getting error on using INT_MAX..
// instead of 1e9;
	
vector<int> dp(x+1,1e9);

dp[0] = 0;

for(int i=1;i<x+1;++i){
	for(int j=0;j<n;++j){
		if(i-c[j]>=0) dp[i] = min(dp[i],dp[i-c[j]]+1);
	}						
}

cout<< (dp[x] == 1e9 ? -1 : dp[x]) << endl;

}
// *********************************************************************


