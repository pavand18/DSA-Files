// >>>>>> set <<<<<<<

#include <bits/stdc++.h>
using namespace std;
 

 
//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
int main(){
	#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
//>>>>>>>>>>>>>>>>###################<<<<<<<<<<<<<<<<<<<
int n;		cin>>n;
vector<int> v(n);
for(int i=0;i<n;++i) cin>>v[i];

// 1. set
// keep only unique elements
// always in sorted order 
// O(logN);


// set<int> st;
// for(int i=0;i<n;++i) st.insert(v[i]);
// cout<<*(st.begin())<<endl;
// cout<<*(++st.begin())<<endl;
// cout<<*(--st.end())<<endl;
// st.erase(5);
// st.insert(4);
// st.insert(9);
// cout<<st.count(3)<<endl;



// 2.unordered_set<int> st;
// unique elements 
// sorted order not necessary 
// O(1) worst case O(n)

// unordered_set<int> st;
// for(auto it:v) st.insert(it);
// cout<<st.size()<<endl;
// st.insert(10);
// cout<<*(++st.begin())<<endl;
// // cout<<*(--st.end())<<endl; dont know issue with this command


// for(auto it:st) cout<<it<<" ";
// cout<<endl;
// }



// 3.multiset<int> st;
// stores duplicate elements also
// always in sorted order
// O(logN)

// multiset<int> st;
// for(int i=0;i<n;++i) st.insert(v[i]);
// // st.erase(++st.begin());
// // st.erase(2);
// cout<<*(++st.begin())<<endl;
// auto it = --st.end();
// cout<<*(it)<<endl;
// cout<<*(--it)<<endl;
// cout<<*(--st.end())<<endl;
// cout<<st.count(2)<<endl;

// for(auto it:st) cout<<it<<" ";
// cout<<endl;
// }
  

// *********************************************************************
