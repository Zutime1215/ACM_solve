#include <bits/stdc++.h>
using namespace std;

int main() {
	string a;
	int t; cin >> t;
	while (t--) {
		cin >> a;
		if (a.find("ca") <= 2) { cout << "NO" <<endl; }
		else { cout << "YES" << endl; }
	}
}