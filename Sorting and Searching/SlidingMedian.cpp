#include<bits/stdc++.h>

using namespace std;

#define ll long long


int main(){
	ll n,k;
	cin>>n>>k;
	vector<ll> a(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	multiset<ll> ms;
	for(int i =0;i<k;i++){
		ms.insert(a[i]);
	}
	ll median_index = k/2-(k%2==0);

	multiset<ll>::iterator it = ms.begin();
	cout<<*next(it,median_index)<<" ";
	for(int i=1;i+k-1<n;i++){
		ms.erase(ms.lower_bound(a[i-1]));
		ms.insert(a[i+k-1]);
		multiset<ll>::iterator it = ms.begin();
		cout<<*next(it,median_index)<<" ";
	}
}