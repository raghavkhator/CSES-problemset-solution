#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	map<int,vector<int> > roads;

	for(int i = 0;i<m;i++){
		int a,b;
		cin>>a>>b;
		roads[a].push_back(b);
		roads[b].push_back(a);
	}
	vector<int> visited(n+1,0);
	vector<int> ans;
	visited[1] = -1;
	queue<int> q;
	q.push(1);
	bool found = false;
	while(!q.empty()){
		int cur = q.front();
		q.pop();
		if(cur==n) break;
		for(auto i: roads[cur]){
			if(!visited[i]){
				q.push(i);
				visited[i] = cur;
			}
		}

	}

	if(!visited[n]){
		cout<<"IMPOSSIBLE";
		return 0;
	}
	ans.push_back(n);
	while(visited[n]!=-1){
		ans.push_back(visited[n]);
		n = visited[n];
	}
	cout<<ans.size()<<endl;
	for(int i=ans.size()-1;i>=0;i--) cout<<ans[i]<<" ";
}






