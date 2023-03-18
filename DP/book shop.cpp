// >>>>>> Book shop : iterative <<<<<<<

#include <bits/stdc++.h>
using namespace std;
 
//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
int main(){
	#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
int n,x;		cin>>n>>x;
vector<int> c(n),p(n);
for(int i=0;i<n;++i) cin>>c[i];
for(int i=0;i<n;++i) cin>>p[i];

vector<pair<int,int>> v;
for(int i=0;i<n;++i) v.push_back({c[i],p[i]});
sort(v.begin(),v.end());

vector<int> dp(x+1,0);
dp[0]=0;

for(int i=0;i<x+1;++i){
	for(int j=0;j<n;++j){
		if(i-v[j].first>=0) dp[i] = max(dp[i-v[j].first] + v[j].second,dp[i]);
		if(i==x) cout<<j<<" : "<<dp[i-v[j].first]<<" * "<<v[j].second<<endl;
	}
}
for(int i=0;i<x+1;++i)
cout<<i<<"  "<<dp[i]<<endl;
}
// *********************************************************************

