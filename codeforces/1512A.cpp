#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, n, common; cin>>t;
	while(t--) {
		cin>>n;
		int arr[n];
		for (int i=0;i<n;i++) {cin>>arr[i];}

		if (arr[0]==arr[1]) common = arr[0];
		else if (arr[0]==arr[2]) common = arr[0];
		else common = arr[1];

		// cout<<common<<endl;

		for (int i=0;i<n;i++) {
			if (arr[i]!=common){
				cout<<i+1<<endl;
				break;
			}
		}
	}
}