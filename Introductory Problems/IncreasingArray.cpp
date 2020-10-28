#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	long long int sol = 0;
	vector<long long int> nums(n);
	for(int i=0;i<n;i++)
		cin>>nums[i];

	for(int i = 1;i<n;i++){
		long long int diff = max(nums[i],nums[i-1]) - nums[i];
		nums[i] += diff;
		sol += diff;
	}
	cout<<sol;

}