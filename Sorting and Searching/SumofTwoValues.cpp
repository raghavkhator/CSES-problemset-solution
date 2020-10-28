#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,x;
	cin>>n>>x;

	map<int,int> a;

	for(int i =0;i<n;i++){
		int temp;
		cin>>temp;
		if(a.count(x-temp)){
			cout<<i+1<<" "<<a[x-temp];
			return 0;
		}
		a[temp] = i+1;
	}
	cout<<"IMPOSSIBLE";
}

