// >>>>>> max subsequence sum of array without picking adj. elements <<<<<<<

#include <bits/stdc++.h>
using namespace std;

int n;		
int a[6];

int func(int i)	
{		
	if(i==0) return a[0];
	if(i<0) return 0;
	
	return max(a[i]+func(i-2),func(i-1));
}

 
//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
int main(){
	#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
for(int i=0;i<6;++i) cin>>a[i];

for(int i=0;i<6;++i) cout<<func(i)<<endl;
}

// *********************************************************************
// >>>>>> max subsequence sum of array without 
// picking adj. elements : memoisation <<<<<<<

#include <bits/stdc++.h>
using namespace std;

int n;		
int a[6];
int dp[6];

int func(int i)	
{		
	if(i==0) return a[0];
	if(i<0) return 0;

	if(dp[i]!=-1) return dp[i];
	return dp[i] = max(a[i]+func(i-2),func(i-1));
}

 
//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
int main(){
	#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);	
#endif
//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
for(int i=0;i<6;++i){ dp[i]=-1; cin>>a[i]; }

for(int i=0;i<6;++i) cout<<func(i)<<endl;
}

// *********************************************************************

