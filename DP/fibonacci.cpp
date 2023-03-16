#include <bits/stdc++.h>
using namespace std;
 
#define F              	first
#define S              	second
#define	co(x)	   		cout<<x<<endl
#define ll             	long long int
#define vi             	vector<int>
#define vii				vector<vector<int>>
#define pb             	push_back
#define si             	set<int>
#define pii            	pair<int,int>
#define mii            	map<int,int>
#define miv				map<int,vi>
#define all(p)         	p.begin(), p.end()
#define yes				cout<<"YES"<<endl
#define no				cout<<"NO"<<endl
#define sz(x)			((int) x.size())
 
#define print(a)       	for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      	for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  	for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl
 
//*****************************************************************************************************************
const int N=1e5+10;
int x=0;

int func(int n)
{
	++x;
	if(n==2) return 1;
	if(n==1) return 1;

	return func(n-1) + func(n-2);
}
 
//*****************************************************************************************************************
int main(){
	#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
int t;		cin >> t;
while(t--){
//*****************************************************************************************************************
int n;		cin>>n;
cout<<func(n)<<endl;
cout<<"no. of iterations : "<<x<<endl;
}}

//*****************************************************************************************************************

2.// >>>>>> fibo after memoisation <<<<<<<

#include <bits/stdc++.h>
using namespace std;
 
int dp[40];
int x = 0;

int func(int n)
{
	++x;
	if(n==1) return 1;
	if(n==2) return 1;

	if(dp[n]!=-1) return dp[n];
	return dp[n] = func(n-1) + func(n-2);
}
 
//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
int main(){
	#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
int t;		cin>>t;
while(t--){
	int n;		cin>>n;
	for(int i=0;i<40;++i) dp[i]=-1;

	cout<<func(n)<<endl;
	cout<<"no. of iterations : "<<x<<endl; 
}}

// *********************************************************************



