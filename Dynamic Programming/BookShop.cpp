#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, total_price;
	cin>>n>>total_price;
	vector<int> price(n), pages(n);
	for(int i =0;i<n;i++) cin>>price[i];
	for(int i =0;i<n;i++) cin>>pages[i];

	vector<vector<int> > dp(n+1,vector<int>(total_price+1,0));
	
	for(int i = 1;i<=n;i++){
		for(int j=0;j<=total_price;j++){
			if(j<price[i-1])
				dp[i][j] = dp[i-1][j];
			else
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-price[i-1]] + pages[i-1]);
		}
	}
	cout<<dp[n][total_price];

}