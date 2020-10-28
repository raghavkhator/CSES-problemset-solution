#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> id(n);

	for(int i=0;i<n;i++){
		cin>>id[i];
	}

	map<int,int> position;
	int ans = 0;
	int start = 0;
	int i = 0;
	while(i<n){
		start = max(position[id[i]],start);

		ans = max(ans, i-start+1);

		position[id[i]] = i+1;

		i++;
	}

	cout<<ans;
}