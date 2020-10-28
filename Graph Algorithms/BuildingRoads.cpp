#include<bits/stdc++.h>

using namespace std;

void dfs(map<int,vector<int> >& roads, vector<int> & visited, int curr){
	visited[curr] = true;
	for(auto &i: roads[curr]){
		if(!visited[i]){
			dfs(roads,visited,i);
		}
	}
}

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
	vector<int> visited(n+1,false);
	vector<int> ans;

	for(int i =1;i<=n;i++){
		if(!visited[i]){
			ans.push_back(i);
			dfs(roads,visited,i);
		}
	}
	cout<<ans.size()-1<<endl;
	for(int i = 1;i<ans.size();i++){
		cout<<ans[i-1]<<" "<<ans[i]<<endl;
	}
}






