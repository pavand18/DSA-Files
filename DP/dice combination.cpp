// >>>>>> dice combination : Recursive <<<<<<<

#include <bits/stdc++.h>
using namespace std;

int m=1e9+7;
const int N=1e6+5;
int dp[N]; 

// dp[i] : no. of ways to get sum == i;
int func(int n)
{
	if(n<0) return 0;
	if(n==0) return 1;	

	if(dp[n]!=-1) return dp[n];

	dp[n]=0;											
	for(int i=1;i<=6;++i) (dp[n]+=func(n-i)) %=m;	
	return dp[n];
}		 
 
//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
int main(){
	#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
for(int i=0;i<N;++i) dp[i]=-1;
int n;		cin>>n;
cout<<func(n) ;
}
// *********************************************************************

