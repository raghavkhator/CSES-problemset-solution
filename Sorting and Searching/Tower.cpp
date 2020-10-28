#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	vector<int> cubes(n);
	for(int i = 0;i<n;i++){
		cin>>cubes[i];
	}

	multiset<int> ms;
	ms.insert(cubes[0]);
	for(int i=1;i<n;i++){
		auto it = ms.upper_bound(cubes[i]);
		if(*it<=cubes[i]){
			ms.insert(cubes[i]);
		}
		else{
			multiset<int>::iterator hit(ms.find(*it));
			if (hit!= ms.end()) ms.erase(hit);
			ms.insert(cubes[i]);
		}
	}
	cout<<ms.size();
}