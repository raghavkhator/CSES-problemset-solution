#include<bits/stdc++.h>

using namespace std;

bool canGo(){
	return true;
}

int ans = 0;
void totalPaths(string path, int i, vector<vector<bool>>& visited, int row,int col){
	cout<<i<<" "<<ans<<"\t";
	if(i==48 and row==6 and col==0) {ans++; return;}
	if(visited[row][col]) return;

	vector<pair<int,int>> dir = {{0,-1},{0,1},{-1,0},{1,0}}; //L R U D
	visited[row][col] = true;
	if(path[i]=='?'){
		for(auto p:dir){
			int x = row + p.first;
			int y = col + p.second;
			if(x>=0 and y>=0 and x<7 and y<7 and canGo()){
				totalPaths(path,i+1,visited,x,y);
			}			
		}
	}
	else if(path[i]=='L'){
		if(col-1>=0  and canGo()){
			totalPaths(path,i+1,visited,row,col-1);
		}	
	}
	else if(path[i]=='R'){
		if(col+1<7 and canGo()){
			totalPaths(path,i+1,visited,row,col+1);
		}	
	}
	else if(path[i]=='U'){
		if(row-1>=0  and canGo()){
			totalPaths(path,i+1,visited,row-1,col);
		}	
	}
	else if(path[i]=='D'){
		if(row+1<7  and canGo()){
			totalPaths(path,i+1,visited,row+1,col);
		}	
	}
	visited[row][col] = false;
	
}

int main(){
	string path="??????R??????U??????????????????????????LD????D?";
	cout<<path<<endl;
	// cin>>path;
	vector<vector<bool> > visited(7,vector<bool>(7,false));
	totalPaths(path,0,visited,0,0);
	cout<<endl;
	cout<<::ans;
}