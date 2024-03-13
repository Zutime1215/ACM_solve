#include <bits/stdc++.h>
using namespace std;

int main() {
	int a=0,b=0,c=0;
	int n; cin >> n;
	int t[n];
	for (int i=0;i<n;i++) {
		cin >> t[i];
	}

	for (int i=0;i<n;i++) {
		a = a + (t[i] == 1);
		b = b + (t[i] == 2);
		c = c + (t[i] == 3);
	}
	
	if (a*b*c == 0) {
		cout << 0 << endl;
	} else {
		int x[3] = {a,b,c};
		sort(x, x+3);
		cout << x[0] <<endl;

		for (int i=0;i<x[0];i++) {
			for (int j=0;j<n;j++) {
				if (t[j] != 1) {continue;}
				else {
					t[j] = 0;
					cout << j+1 << " ";
					break;
				}	
			}

			for (int j=0;j<n;j++) {
				if (t[j] != 2) {continue;}
				else {
					t[j] = 0;
					cout << j+1 << " ";
					break;
				}	
			}

			for (int j=0;j<n;j++) {
				if (t[j] != 3) {continue;}
				else {
					t[j] = 0;
					cout << j+1 << " ";
					break;
				}	
			}
			cout << "\n";
		}
	}
}