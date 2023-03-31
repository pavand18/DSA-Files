// >>>>>> map <<<<<<<

#include <bits/stdc++.h>
using namespace std;
 
 
//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
int main(){
	#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
// 1.map<int,int> mp;
// sorted order wrt to key
// map[key] = value;
// stores only unique keys 
// if repeated then values get overwrited
// O(logN);

// map<int,int> mp;
// for(int i=1;i<10;++i) mp[i] = i*11;
// // mp[1] = 69;
// // mp.erase(mp.begin());
// mp.erase(++mp.begin());
// mp.erase(--mp.end());

// // auto it = mp.find(19);
// // cout<<(it==mp.end())<<endl;
// mp.insert({2,23});

// auto it = mp.find(1);
// mp.erase(it);
// cout<<(*it).second<<endl;

// for(auto it:mp) cout<<it.first<<" "<<it.second<<endl;
// }



// 2.unordered_map<int,int> mp;
// order does not matter here
// O(1) in worst case it is O(N)

unordered_map<int,int> mp;
for(int i=0;i<10;++i) mp[i]=i*11;

for(auto it:mp) cout<<it.first<<" "<<it.second<<endl;
}

// *********************************************************************


