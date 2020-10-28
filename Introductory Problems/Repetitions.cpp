#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;
	int sol = 1;
	int ans = 1;
	char curr = s[0];
	for(int i = 1;i<s.length();i++){
		if(s[i]==curr) ans++;
		else{
			curr=s[i];
			sol = max(sol,ans);
			ans = 1;
		}
	}
	sol = max(sol,ans);
	cout<<sol;
}
