#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	long long k;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		if (n%2 == 0) {
			cout << n+k*2<<endl;
		}
		else if (n%3 == 0) {
			cout << n+3+(k-1)*2<<endl;
		}
		else if (n%5 == 0) {
			cout << n+5+(k-1)*2 <<endl;
		}
		else if (n%7 == 0) {
			cout << n+7+(k-1)*2 <<endl;
		}
		else {
			cout << n+n+(k-1)*2 <<endl;
		}
	}
}