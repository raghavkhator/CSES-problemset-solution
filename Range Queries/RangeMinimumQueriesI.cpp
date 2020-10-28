#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
	int n,q;
	cin>>n>>q;

	ll arr[n], lsum[n], rsum[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	lsum[0] = arr[0];
	rsum[n-1] = arr[n-1];
	for(int i=1;i<n;i++){
		lsum[i] = min(lsum[i-1],arr[i]);
		int j = n-i-1;
		rsum[j] = min(rsum[j+1],arr[j]);
	}
	ll ans[q];
	for (int i = 0; i < q; ++i)
	{
		int a,b;
		cin>>a>>b;
		ans[i] = (lsum[b]-lsum[a-1]);
	}
	for(ll an: ans) cout<<an<<endl;
}