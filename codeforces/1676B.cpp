#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,x; cin>>t;
	while(t--) {
		x=0;
		cin>>n;
		int arr[n];
		for (int i=0;i<n;i++) {
			cin>>arr[i];
		}
		sort(arr, n+arr);

		for (int i=1;i<n;i++) {
			x += arr[i]-arr[0];
		}
		cout<<x<<endl;
	}
	
}