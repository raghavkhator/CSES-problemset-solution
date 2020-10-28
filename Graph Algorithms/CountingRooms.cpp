#include<bits/stdc++.h>

using namespace std;

void dfs(vector<string> &grid, int i, int j){
	if(i>=grid.size() or j>=grid[0].length() or i<0 or j<0) return;
	if(grid[i][j]=='#') return;

	grid[i][j] = '#';

	dfs(grid,i+1,j);
	dfs(grid,i,j+1);
	dfs(grid,i-1,j);
	dfs(grid,i,j-1);
}

int main(){
	int n,m;
	cin>>n>>m;
	vector<string> grid(n);
	for(int i=0;i<n;i++)
		cin>>grid[i];

	int count=0;

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(grid[i][j]=='.') {count++; dfs(grid,i,j);}
		}
	}
	cout<<count;
}