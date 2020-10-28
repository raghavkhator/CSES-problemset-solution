#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll getMed(vector<int> arr,int i, int k){
	ll med = 0;
	//find median code
	return med;

}

int main(){
	ll n,k;
	cin>>n>>k;
	vector<ll> a(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	sort(a.begin(),a.begin()+k);
	ll median_index = k/2-(k%2!=0);
	cout<<a[median_index]<<" ";
	for(int i=1;i+k<n;i++){
		cout<<getMed(arr,i,k);
	}
}