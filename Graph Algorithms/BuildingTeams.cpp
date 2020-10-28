#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	map<int,vector<int> > friends;

	for(int i = 0;i<m;i++){
		int a,b;
		cin>>a>>b;
		friends[a].push_back(b);	
		friends[b].push_back(a);
	}
	vector<int> visited(n+1,0);
	vector<int> ans(n,2);
	visited[1] = 1;
	ans[0] = 1;
	queue<int> q;
	q.push(1);

	bool eve = false;

	while(!q.empty()){
		int cur = q.front();
		q.pop();
		for(auto i: friends[cur]){
			if(!visited[i]){
				q.push(i);
				if(eve) ans[i-1] = 2;
				else ans[i-1] = 1;
				visited[i] = 1;
			}
		}
		eve  = !eve;
	}

	// if(!visited[n]){
	// 	cout<<"IMPOSSIBLE";
	// 	return 0;
	// }
	for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
}






