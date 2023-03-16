// >>>>>> minimum sum path in matrix from (0,0) to (i,j) <<<<<<<

#include <bits/stdc++.h>
using namespace std;

int dp[3][3];
int a[3][3];
int N = INT_MAX;
 
int func(int i,int j)
{
	if(i==0&&j==0) return a[i][j];
	if(i<0||j<0) return N;

	return min(func(i-1,j),func(i,j-1)) + a[i][j];
}
//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
int main(){
	#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
for(int i=0;i<3;++i){
	for(int j=0;j<3;++j)
	{
		cin>>a[i][j];
		dp[i][j]=N;
	}
}
cout<<func(2,2)<<endl;
}

// *********************************************************************

// >>>>>> minimum sum path in matrix from (i,j) to (0,0) <<<<<<<

#include <bits/stdc++.h>
using namespace std;

int dp[3][3];
int a[3][3];
int N = INT_MAX;
 
int func(int i,int j)
{
	if(i==2&&j==2) return a[i][j];
	if(i>=3||j>=3) return N;

	return min(func(i+1,j),func(i,j+1)) + a[i][j];
}

//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
int main(){
	#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
for(int i=0;i<3;++i){
	for(int j=0;j<3;++j)
	{
		cin>>a[i][j];
		dp[i][j]=N;
	}
}

cout<<func(0,0)<<endl;
}

// *********************************************************************

// >>>>>> minimum sum path in matrix from (i,j) to (n-1,n-1) 
// : using memoisation <<<<<<<
tc is O(m+n) 

#include <bits/stdc++.h>
using namespace std;

int dp[3][3];
int a[3][3];
int N = INT_MAX;
int x=0;	//no. of iterations..

int func(int i,int j)
{
	++x;
	if(i==2&&j==2) return a[i][j];
	if(i>=3||j>=3) return N;

	if(dp[i][j]!=N) return dp[i][j];
	return dp[i][j] = min(func(i+1,j),func(i,j+1)) + a[i][j];
}

//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
int main(){
	#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
for(int i=0;i<3;++i){
	for(int j=0;j<3;++j)
	{
		cin>>a[i][j];
		dp[i][j]=N;
	}
}

cout<<func(0,0)<<endl;
cout<<x<<endl;
}

// *********************************************************************











