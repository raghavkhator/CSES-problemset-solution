#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<long long> dp(n+1,0);
	dp[0] = 1;
	for(long long i = 1;i<=n;i++){
		for(int j = 1;j<=6;j++){
			if(j<=i){
				dp[i] += dp[i-j];
				dp[i]%=(int)(1e9+7);
			} 

		}
	}
	cout<<dp[n];
	return 0;
}