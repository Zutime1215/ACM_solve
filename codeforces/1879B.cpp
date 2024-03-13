#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x;
	

	cin >> t;

	while(t--) {
		cin >> n;
		int a[n], b[n];
		for (int i=0;i<n;i++) {
			cin >> a[i];
		}
		for (int i=0;i<n;i++) {
			cin >> b[i];
		}
		
		sort(a, a+n);	
		sort(b, b+n);

		x = 0;
		if (a[0] > b[0]) {
			for (int i = 0; i<n;i++) {
				x += a[i];
			}
			cout << x+b[0]*n << endl;
		}
		else {
			for (int i = 0; i<n;i++) {
				x += b[i];
			}
			cout << x+a[0]*n << endl;
		}
	}

	return 0;
}