#include<bits/stdc++.h>

using namespace std;


int main(){
	int n,t;
	cin>>n>>t;
	vector<int> k(n);
	for(int i=0;i<n;i++)
		cin>>k[i];
	long long int l = 1, r =1e18;

	while(l<r){
		long long int mid = (r-l)/2 + l;

		long long int temp = 0;
		for(int i:k){
			temp += min(mid/i,(long long int)1e9);
		}
		if(temp>=t){
			r = mid;
		}
		else
			l = mid + 1;
	}
	cout<<l;
}