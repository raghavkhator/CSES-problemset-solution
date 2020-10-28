#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	ll n,k;
	cin>>n>>k;
	ll a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	sort(a,a+k);
	ll median_index = k/2-(k%2!=0);
	cout<<a[median_index]<<" ";
	for(int i=1;i+k<n;i++){
		int j = i+k-1;
		while(j>=i+1){
			if(a[j]<a[j-1]){
				ll temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
			j--;
		}
		int mid = i + median_index;
		cout<<a[mid]<<" ";
	}
}