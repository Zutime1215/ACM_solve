#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, x;
	x = 0;
	cin >> n;

	while (1) {
		if (n==0) {
			break;
		}
		x = x + n%2;
		n = n/2;
	}
	cout << x << endl;
}