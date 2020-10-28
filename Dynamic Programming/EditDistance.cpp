#include<bits/stdc++.h>

#define ll long long
using namespace std;

int main(){
	string s1,s2;
	s1 = "LOVE";
	s2 = "MOVIE";
	cin>>s1>>s2;
	vector<vector<int> > dp(s1.length()+1,vector<int>(s2.length()+1,0));
	for(int i =0;i<=s1.length();i++) dp[i][0] = i;
	for(int i =0;i<=s2.length();i++) dp[0][i] = i;
	
	for(int i=1;i<=s1.length();i++){
		for(int j=1;j<=s2.length();j++){
			dp[i][j] = min(dp[i][j-1]+1,min(dp[i-1][j]+1,dp[i-1][j-1]+ (s1[i-1]!=s2[j-1])));
			// if(s1[i-1]==s2[j-1]) dp[i][j] = dp[i-1][j-1];
			// else dp[i][j] = min(dp[i][j-1],min(dp[i-1][j-1],dp[i][j-1])) +1;
		}
	}
	cout<<dp[s1.length()][s2.length()];
}
