#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, k, y;
	cin >>t;
	while(t--) {
		y=0;
		cin>>x>>k;
		for (int i=x;i>0;i++) {
			if (i%k != 0) {
				y++;
			}
			else {}
		}
	}
}