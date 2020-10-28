#include<bits/stdc++.h>
 
#define ll long long
 
using namespace std;
 
int main(){
	ll n,x;
	cin>>n>>x;
	vector<ll> arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];
 
	map<ll,pair<int,int>> mp;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			mp[arr[i]+arr[j]] = {i,j};
		}
	}
 
	for(int i=0;i<n;i++){
		if(x-arr[i] <=0) continue;
		for(int j=i+1;j<n;j++){
			ll diff = x-arr[i]-arr[j];
			if(diff<=0) continue;
 
			if(mp.find(diff)!=mp.end()){
				pair<int,int> p = mp[diff];
				if(i!=p.first and i!=p.second and j!=p.first and j!=p.second){
					cout<<i+1<<" "<<j+1<<" "<<p.first+1<<" "<<p.second+1;
					return 0;
				}
			}
		}
	
	}
	cout<<"IMPOSSIBLE";
}