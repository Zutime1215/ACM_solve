#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t,n, x;
	cin>>t;

	while(t--) {
		x=1;
		cin>>n;
		int arr[n];
		for (int i=0;i<n;i++) {
			cin>>arr[i];
		}
		sort(arr, arr+n);
		for (int i=1;i<n;i++) {
			if ( abs(arr[i]-arr[i-1]) > 1 ) {
				x=0;
				break;
			} 
		}
		if (x==1) cout<<"YES\n";
		else cout<<"NO\n";
	}
}	