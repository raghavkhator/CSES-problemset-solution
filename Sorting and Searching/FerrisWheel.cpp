#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, wt;
	cin>>n>>wt;

	vector<int> p(n);
	
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	sort(p.begin(),p.end());
	int i=0;
	int count=0;

	while(i<n){
		if(i<n-1 and (p[i]+p[i+1])<=wt){
			count++;
			i+=2;
		}
		else if(p[i]<=wt){
			count++;
			i+=1;
		}else i++;
	}

	cout<<count;
}