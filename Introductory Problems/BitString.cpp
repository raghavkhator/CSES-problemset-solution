#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
	int n;
	cin>>n;
	long long ans=1;
	while(n--){
		ans = (2*ans)%((int)1e9+7);
	}
	cout<<ans;
	return 0;
}