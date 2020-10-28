#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	vector<pair<int,int>> arr;

	int a,b;
	int last = 0;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		arr.push_back({a,1});
		arr.push_back({b,-1});
	}

	sort(arr.begin(),arr.end());

	int max_cust = 0;
	int count = 0;
	for(int i=0;i<arr.size();i++){
		max_cust += arr[i].second;
		count = max(count,max_cust);
	}
	cout<<count;
}