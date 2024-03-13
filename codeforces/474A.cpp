#include <bits/stdc++.h>
using namespace std;

int main() {
	string a = "qwertyuiop[asdfghjkl;zxcvbnm,./", b, c;
	cin >> b >> c;
	if (b == "R") {
		for (int i=0;i<c.size();i++) {
			for (int j=0;j<a.size();j++) {
				if (c[i]==a[j]) { cout << a[j-1]; }
			}
		}
	}

	else {
		for (int i=0;i<c.size();i++) {
			for (int j=0;j<a.size();j++) {
				if (c[i]==a[j]) { cout << a[j+1]; }
			}
		}
	}
}