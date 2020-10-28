#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<vector<ll> > task(n,vector<ll>(2));

	for(int i = 0;i<n;i++){
		cin>>task[i][0]>>task[i][1];
	}

	sort(task.begin(),task.end());

	ll ans = task[0][1] - task[0][0];
	ll curr_time = task[0][0];
	for(int i=1;i<n;i++){
		curr_time += task[i][0]; 
		ans += task[i][1] - curr_time;
	}
	cout<<ans;
}