// >>>>>> coin combination 1 : iterative <<<<<<<

#include <bits/stdc++.h>
using namespace std;
 
// dp[i] = no. of ways to make == i;
// dp[0] = 1;
// dp[i] = sum of dp[i-k];
// final sp = dp[x];

const int m = 1e9+7;
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

vector<int> dp(x+1,0);
dp[0]=1;

for(int i=1;i<=x;++i){
	for(int j=0;j<n;++j){
		// best way to implement modulo arithmetic..
		if(i-c[j]>=0) (dp[i]+=dp[i-c[j]]) %= m;
	}		
}

cout<<dp[x];
}

// *********************************************************************

