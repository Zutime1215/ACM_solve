#include <bits/stdc++.h>
using namespace std;

int x = 0;

void primeOrNot(int j){
	if (j == 2 || j == 3 || j == 5 || j == 7) { x++; }
	else if (j%2 != 0 && j%3 != 0 && j%5 != 0 && j%7 != 0 ) { x++; }
}


void divisor_finder(int m) {
	for (int i=2;i<=m;i++) {
		if (m%i == 0) {
			primeOrNot(i);
		}
	}
}



int main() {
	int n; cin >> n;
	divisor_finder(n);

	cout << x;
	
}