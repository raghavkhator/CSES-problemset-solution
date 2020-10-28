#include<bits/stdc++.h>

#define ll long long
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<ll> nums(n);
	for(int i =0;i<n;i++)
		cin>>nums[i];
	ll mindiff = LONG_MAX;
	for(ll i = 0;i<pow(2,n);i++){
		ll sum1=0, sum2 =0;
		for(int j = 0;j<n;j++){
			if(i & 1<<j){
				sum1+=nums[j];
			}
			else sum2+=nums[j];
		}
		mindiff = mindiff>abs(sum1-sum2)?abs(sum1-sum2):mindiff;
	}
	cout<<mindiff;
}
