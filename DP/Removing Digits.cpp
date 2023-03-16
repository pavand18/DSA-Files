// >>>>>> Removing Digits : iterative <<<<<<<

// dp[i] = minimum number of steps to make i == 0
// string s = stoi(i);
// for(int i=0;i<s.size();++i) dp[i] = min(dp[i],dp[i-s[i]]+1);
// base case : dp[0] = 0;
// dp[<0]=0;
// final sub : dp[n]; 		

#include <bits/stdc++.h>
using namespace std;

const int N=1e6+5;
int dp[N];

//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
int main(){
	#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
int n;		cin>>n;
// for(int i=0;i<N;++i) dp[i]=INT_MAX;	
vector<int> dp(n+1,INT_MAX);

dp[0]=0;
for(int i=1;i<=n;++i)
{
	string s = to_string(i);
	for(int j=0;j<s.size();++j) 
	{
		dp[i]=min(dp[i],dp[i-(s[j]-'0')]+1); 
	} 
}

cout<<dp[n];
}
// *********************************************************************


