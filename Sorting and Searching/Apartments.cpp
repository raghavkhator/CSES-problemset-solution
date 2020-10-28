#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> a(n), b(m);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());

	int i = 0,j = 0;
	int count = 0;

	while(i<n and j<m){
		if(abs(a[i]-b[j])<=k){
			count++;
			i++;j++;
		}
		else if(a[i]>b[j]){
			j++;
		}
		else i++;
	}
	cout<<count;
}