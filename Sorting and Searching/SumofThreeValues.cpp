#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
	ll n,x;
	cin>>n>>x;
	vector<vector<ll>> arr(n,vector<ll>(2));
	for(int i=0;i<n;i++)
		cin>>arr[i][0], arr[i][1]=i;

	sort(arr.begin(),arr.end());
	for(int i=0;i<n;i++){
		if(x-arr[i][0] <0) continue; 
		for(int j=i;j<n;j++){
			ll cur = (x-arr[i][0]-arr[j][0]);
			if(cur < 0 or arr[i][1]==arr[j][1]) continue;
			int r = j+1, l=n-1;
			while(r<=l){
				int mid = (l+r)/2;
				if(arr[mid][0]==cur and arr[mid][1]!=arr[i][1] and arr[mid][1]!=arr[j][1]){
					cout<<arr[i][1]+1<<" "<<arr[j][1]+1<<" "<<arr[mid][1]+1;
					return 0;
				}
				if(arr[mid][0]<cur){
					r = mid+1;
				}
				else l = mid-1;
			}
		}
	}
	cout<<"IMPOSSIBLE";
}