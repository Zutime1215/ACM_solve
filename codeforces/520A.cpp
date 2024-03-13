#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	string str;
	cin >> str;
	char a[n];


	for (int i=0;i<n;i++) {
		a[i] = tolower(str[i]);
	}
	cout << a;
}