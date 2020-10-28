#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, sum;
	cin>>n>>sum;
	vector<int> coins(n);
	for(int i =0;i<n;i++) 
		cin>>coins[i];
	vector<int> dp(sum+1,1e9);
	dp[0] = 0;
	for(int i = 1;i<=sum;i++){
		for(int j = 0;j<n;j++){
			if(coins[j]<=i){
				dp[i] = min(dp[i],dp[i-coins[j]]+1);
			}
		}
	}
	cout<<(dp[sum]==1e9?-1:dp[sum]);
}