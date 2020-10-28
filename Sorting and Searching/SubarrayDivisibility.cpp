#include<bits/stdc++.h>

#define ll long long 

using namespace std;

int main(){
	int n;
	cin>>n;
	ll a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	ll sum = 0, count = 0;
	map<ll,ll> mp;
	mp[0]=1;
	for (int i = 0; i < n; ++i)
	 {
	 	sum = (sum + a[i]%n +n)%n;

	 	if(mp.count(sum)){
	 		count +=mp[sum];
	 	}
	 	mp[sum]++;
	 }
	 cout<<count; 
}