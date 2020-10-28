#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;

	vector<int> arr(n);

	for(int i =0;i<n;i++)
		cin>>arr[i];

	long sum = arr[0];

	long temp_sum = arr[0];

	for(int i = 1;i<n;i++){
		temp_sum = (temp_sum+arr[i]>arr[i])?temp_sum+arr[i]:arr[i];
		sum = max(temp_sum,sum);
	}

	cout<<sum;
}