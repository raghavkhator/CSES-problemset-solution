#include<bits/stdc++.h>

using namespace std;

int main(){
	int a, b;
	cin>>a>>b;
	int count = 0;

	while(a and b and a!=b){
		count++;
		if(a>b){
			a = a-b;
		}else b = b-a;
	}
	cout<<count;
}