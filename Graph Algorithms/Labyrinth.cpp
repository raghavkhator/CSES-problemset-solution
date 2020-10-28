#include<bits/stdc++.h>

using namespace std;


int main(){
	int n,m;
	cin>>n>>m;
	vector<vector<char> > grid(n,vector<char>(m));
	pair<int,int> start, end;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++){
			cin>>grid[i][j];
			if(grid[i][j]=='A') start = {i,j};
			if(grid[i][j]=='B') end = {i,j};
		}
	// cout<<end.first<<end.second<<endl;
	queue<pair<int,int> > q;
	q.push(start);
	map<pair<int,int>,pair<int,int>> map;
	bool flag = false;
	while(!q.empty()){
		pair<int,int> curr = q.front(); q.pop();
		grid[curr.first][curr.second] = '#';
		// cout<<curr.first<<curr.second<<endl;
		vector<pair<int,int> > dir = {{0,1},{0,-1},{1,0},{-1,0}};
		for(int i=0;i<4;i++){
			int x = dir[i].first + curr.first, y = dir[i].second + curr.second;
			if(x>=0 and y>=0 and x<n and y<m and grid[x][y]!='#'){
				map[{x,y}] = curr;
				if(end.first == x and end.second == y) {flag = true; break;}
				q.push({x,y});
			}
		}
		if(flag) break;
	}
	if(!flag){
		cout<<"NO"; return 0;
	}
	string path = "";
	vector<pair<int,int> > dir = {{0,1},{0,-1},{1,0},{-1,0}};
	vector<char> d = {'R','L','D','U'};
	pair<int,int> curr = end;
	while(curr!=start){
		pair<int,int> parent = map[curr];
		for(int i=0;i<4;i++){
			if((curr.first-parent.first)==dir[i].first and (curr.second-parent.second)==dir[i].second) {path = d[i] + path;}
		}
		curr = parent;
	}
	cout<<"YES"<<endl<<path.length()<<endl<<path;
}




