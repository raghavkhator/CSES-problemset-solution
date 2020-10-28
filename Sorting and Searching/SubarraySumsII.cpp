#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
	ll n,x;
	cin>>n>>x;
	vector<ll> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	map<ll,ll> mp;
	mp[0] = 1;
	ll count = 0;
	ll sum = 0;
	for(int i=0;i<n;i++){
		sum+=a[i];
		if(mp.count(sum-x)){
			count+=mp[sum-x];
		}
		mp[sum] += 1;
	}
	cout<<count;
}