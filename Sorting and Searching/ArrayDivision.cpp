#include<bits/stdc++.h>

using namespace std;

#define ll long long

int check(vector<ll> &a, ll mid){
	int k=0;
	ll tsum =0;
	for(int i = 0;i<a.size();i++){
		if(tsum+a[i]>mid){
			k++;
			tsum = 0;
		} tsum+=a[i];
	}
	return ++k;
}

int main(){
	int n;
	ll k;
	cin>>n>>k;

	vector<ll> a(n);
	ll sum = 0;
	for(int i =0;i<n;i++){
		cin>>a[i];
		sum+= a[i];
	}

	ll l=*max_element(a.begin(),a.end()), r=sum;
	ll _max = LLONG_MIN;
	while(l<r){
		ll mid = (r-l)/2 + l;
		int c = check(a,mid);
		if(c>k){
			l = mid+1;
		}else{
			r = mid;
		}
	}
	cout<<l;
}