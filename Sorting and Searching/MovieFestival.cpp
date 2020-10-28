#include<bits/stdc++.h>

using namespace std;

bool compare(pair<int,int> a, pair<int,int> b){
	return a.second<b.second;
}

int main(){
	int n;
	cin>>n;
	vector<pair<int,int> > timings(n);

	for(int i = 0;i<n;i++){
		int a,b;
		cin>>a>>b;
		timings[i] = {a,b};
	}
	sort(timings.begin(),timings.end(),compare);

	int count = 0;
	int end = 0;
	for(int i = 0;i<n;i++){
		if(timings[i].first>=end){
			count++;
			end = timings[i].second;
		}
	}
	cout<<count;

}