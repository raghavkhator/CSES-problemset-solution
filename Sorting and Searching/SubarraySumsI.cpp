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
	int i=0, j=0;
	ll sum=0;
	int count = 0;
	while(i<=j and j<n){
		// cout<<sum<<" ";
		if(sum==x){
			count++;
			sum += a[j] - a[i];
			i++; j++;
		}
		else if(sum>x){
			sum -= a[i];
			i++;
		}
		else{
			sum += a[j++];
		}
	}
	if(sum==x) count++;
	while(sum>x and i<n){
		sum -= a[i];
		i++;
		if(sum==x) count++;
	}
	cout<<count;
}

// 2 4 1 2 7