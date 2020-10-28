#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
	int n,q;
	cin>>n>>q;

	ll arr[n], lsum[n+1];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	lsum[0] = 0;
	for(int i=1;i<n+1;i++){
		lsum[i] = lsum[i-1] + arr[i-1]; 
	}
	// for(ll l: lsum) cout<<l<<" ";
	ll ans[q];
	for (int i = 0; i < q; ++i)
	{
		int a,b;
		cin>>a>>b;
		ans[i] = (lsum[b]-lsum[a-1]);
	}
	for(ll an: ans) cout<<an<<endl;
}