#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, len, x=1; cin >> t; t++;
	string l;
	while (t--) {
		getline(cin, l);
		len = l.length();
		for (int i=0;i<len;i++) {
			x = x + 1*(l[i] == ' ');
		}
		if (x!=1) {cout << x << endl;}
		
		x = 1;
	}
}