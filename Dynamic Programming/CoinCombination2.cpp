#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, sum;
	cin>>n>>sum;
	vector<int> coins(n);
	for(int i=0;i<n;i++) 
		cin>>coins[i];
	vector<int> dp(sum+1,0);
	dp[0]=1;
	for(int i = 1;i<=sum;i++){
		for(int j=0;j<n;j++){
			if(coins[j]<=i){
				dp[i] =d p[i-coins[j]] +1 ;
				dp[i]%=(int)(1e9+7);
			}
		}
	}
	cout<<dp[sum];
}