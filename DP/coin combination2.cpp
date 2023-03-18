// >>>>>> coin combination 2 : iterative <<<<<<<
#include <bits/stdc++.h>
using namespace std;
 
// dp[i][j] = no. of ways to get sum==i and 
// last accessed index is j.

const int m = 1e9+7;
 
//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
int main(){
	#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
int nc,s;	cin>>nc>>s;
vector<int> coin(nc);
for(int i=0;i<nc;++i) cin>>coin[i];

sort(coin.begin(),coin.end());
vector<vector<int>> dp(s+1,vector<int> (nc+1,0));
dp[0][0] = 1;

for(int i=0;i<=s;++i){
	for(int j=1;j<=nc;++j){
		if(i-coin[j-1]>=0) (dp[i][j]+=dp[i-coin[j-1]][j]) %=m ;
		if(j-1>=0) (dp[i][j]+=dp[i][j-1]) %=m;
	}
}

// index is considered as zero based...
cout<<dp[s][nc];
}

// 1e6 * 1e2
// this code is giving tle to certain test cases...

// *********************************************************************

this is working code on cses 
this is done using forward dp ie. present state is 
dependent on previous state..

// >>>>>> coin combination 2 : iterative <<<<<<<

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
int nc,sum;			cin>>nc>>sum;
vector<int> coin(nc);
for(int i=0;i<nc;++i) cin>>coin[i];

vector<vector<int>> dp(nc+1,vector<int> (sum+1,0));
// no. of ways to get sum==i..using 0th index
dp[0][0] = 1; 

for(int i=1;i<=nc;++i){
	for(int j=0;j<=sum;++j){
		if(j-coin[i-1]>=0) (dp[i][j]+=dp[i][j-coin[i-1]]) %=m;
		if(i-1>=0) (dp[i][j]+=dp[i-1][j]) %=m;
	}
}

cout<<dp[nc][sum];
}
// *********************************************************************

One more way to do it ..
// backward dp ..
final sp : dp[0][0];
*video 3 priyansh agarwal : solutions

