#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x;
	cin>>t;
	while(t--) {
		x=0;
		cin>>n;
		int arr[n];
		
		for (int i=0;i<n;i++) {
			cin>>arr[i];
		}
		sort(arr, arr+n);

		if (n==2) {cout<<"Yes"<<endl;}
		else {
			for (int i=0;i<n/2;i++) {
				if (arr[i] == arr[i+1]) {
					x++;
				}
			}
			if (x==(n/2)) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
	}
}