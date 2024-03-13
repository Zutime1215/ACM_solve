#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, n, p;
	cin>>t;
	while(t--) {
		p = 1;
		cin>>x>>y>>n;
		// if (y-x < n) cout << -1 << endl;
		// else {
			int arr[n];
			arr[0] = x; arr[n-1] = y;
			for (int i=n-2;i>0;i--) {
				int temp = y-p;
				if (y-temp < temp-x) {
					arr[i] = temp;
					p = p+2;
				}
				else{cout << -1 << endl;}
			}

			for (int i=0;i<n;i++){
				cout << arr[i] <<" ";
			}
			cout << endl;
		// }		
	}
}