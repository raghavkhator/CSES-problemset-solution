#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
	int n;
	cin>>n;
	ll sum = 0;
	vector<ll> arr(n);
	for(int i =0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	sort(arr.begin(),arr.end());
	cout<<max(sum, 2ll*arr[n-1]);

}