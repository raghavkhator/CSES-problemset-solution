#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;

	vector<int> p(n);

	for(int i =0;i<n;i++){
		cin>>p[i];
	}

	sort(p.begin(),p.end());

	int mid = p[n/2];

	long ans = 0;

	for(int i=0;i<n;i++){
		ans+= abs(p[i]-mid);
	}

	cout<<ans;
}