#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int n;
	cin>>n;
	// vector<int> nums(n-1);
	int ans = 0;
	for(int i = 0;i<n-1;i++){ 
			int temp;
			cin>>temp;
			ans  += temp - (i+1);
		}
	cout<<n-ans;

	return 0;
}