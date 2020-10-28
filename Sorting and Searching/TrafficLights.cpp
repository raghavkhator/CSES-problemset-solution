#include<bits/stdc++.h>

using namespace std;

int main(){
	int x, n;
	cin>>x>>n;
	
	vector<int> p(n);
	set<int> pos;
	pos.insert(0);
	pos.insert(x);

	int a;
	for(int i=0;i<n;i++){
		cin>>p[i];
		pos.insert(p[i]);
	}
	int c_max = INT_MIN;
	set<int>::iterator it = pos.begin();
	int prev = 0;
	for(;it!=pos.end();it++){
		c_max = max(c_max,*it-prev);
		prev = *it;
	}

	vector<int> ans;
	ans.push_back(c_max);

	for(int i=n-1;i>=1;i--){
		set<int>::iterator it = pos.find(p[i]);
		set<int>::iterator t1 = std::prev(it,1);
		set<int>::iterator t2 = std::prev(it,-1);
		c_max = max(c_max,*t2-*t1);
		ans.push_back(c_max);
		pos.erase(it);
	}
	for(int i=ans.size()-1;i>=0;i--) cout<<ans[i]<<" ";
}