#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
	int t, a, b, x; 
	string s;
	cin >> t;
	while(t--) {
		x = 0;
		cin >> a >> b;
		cin >> s;
		int bb[a];

		for (int i = 0;i<a;i++){
			bb[i] = -1;
		}
		// memset(bb, -1, a);

		for (int i=0;i<a;i++) {
			if (s[i] == 'B') {
				bb[x] = i;
				x++;
			}
		}

		for (int i=0;i<a;i++) {
				cout << bb[i] << " ";
		}
		cout << "\n";
	}
}