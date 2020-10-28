#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	// 1 4 2 5 3

	// 1 3 2
	vector<int> nums(n);
	// int i = 1;
	// for(int j=0;j<n;j+=2)
	// 	nums[j] = i++;

	// for(int j=1;j<n;j+=2){
	// 	nums[j] = i++;
	// 	if(abs(nums[j]-nums[j-1])==1 or (j+1<n and abs(nums[j]-nums[j+1])==1)){
	// 		cout<<"NO SOLUTION"; return 0;
	// 	} 
	// }

	int i = 2,j;

	for(j=0;i<=n;j++){
		nums[j] = i;
		i+=2;
	}
	i = 1;
	for(;i<=n;j++){
		nums[j] = i;
		i+=2;
	}
	for(int k = 1;k<n;k++){
		if(abs(nums[k]-nums[k-1])==1){
			cout<<"NO SOLUTION"; return 0;
		}
	}
	for(int j=0;j<n;j++) cout<<nums[j]<<" ";
}