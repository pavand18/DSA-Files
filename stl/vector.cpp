// >>>>>> vector <<<<<<<

#include <bits/stdc++.h>
using namespace std;
 

//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
int main(){
	#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
vector<int> v{1,2,3,4,5};
// vector<vector<int>> v(n,vector<int>(n,0));

v.push_back(6);
v.pop_back();
reverse(v.begin(),v.end());
sort(v.begin(),v.end());
v.erase(v.begin());
// v.clear();

for(auto it:v) cout<<it<<" ";
cout<<endl;

}

// *********************************************************************
