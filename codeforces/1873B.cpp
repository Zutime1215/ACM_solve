#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,n; cin >> t;
	while(t--) {
		cin >> n;
		int a[n];
		for (int i=0;i<n;i++) {
			cin >> a[i];
		}

		for (int p=0;p<n-1;p++) {
			for (int q=p+1; q<n;q++) {
				if ( a[q] < a[p] ) {
					int temp = a[q];
					a[q] = a[p];
					a[p] = temp;
				}
			}
		}
		a[0] = a[0]+1;
		x = 1;
		for (int p=0;p<n;p++) {
			x = x * a[p];
		}

		cout << x << endl;

	}
}