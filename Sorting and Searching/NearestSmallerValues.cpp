#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	int n;
	cin>>n;
	vector<vector<ll>> a(n,vector<ll>(3));
	for(int i = 0;i<n;i++){
		ll t; cin>>t;
		a[i] = {t,i,-1};
	}
	stack<vector<ll>> s;
	s.push(a[n-1]);
	int i = n-2;
	while(i>=0){
		while(!s.empty() and a[i][0]<(s.top())[0]){
			a[s.top()[1]][2] = a[i][1];
			s.pop();
		}
		s.push(a[i]);
		i--;
	}
	for(int i=0;i<n;i++){
		cout<<a[i][2]+1<<" ";
	}
}


// Input:
// 8
// 2 5 1 4 8 3 2 5

// Output:
// 0 1 0 3 4 3 3 7