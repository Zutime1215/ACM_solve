#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n,x;
	string s;
	int arr[] = {84, 105, 109, 117, 114};
	cin >> t;
	while (t--) {
		x=0;
		cin >> n; cin >> s;
		if (n!=5) { cout << "NO" << endl;}
		else {
			for (int i=0;i<5;i++) {
				for (int j=0;j<5;j++) {
					x = x + ( int(s[i]) == arr[j] );
				}
				if (i==x) { break; }
			}
			if (x==5) { cout << "YES" << endl; }
			else{ cout << "NO" << endl; }
		}	
	}
}