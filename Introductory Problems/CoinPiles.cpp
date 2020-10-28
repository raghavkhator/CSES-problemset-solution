#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		cout<<(((a+b)%3==0 and a*2>=b and b*2>=a)?"YES":"NO")<<endl;
	}
}