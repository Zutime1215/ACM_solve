#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n; cin >> t;
	string inp;
	while (t--) {
		int x=0;
		cin>>n;
		cin>>inp;

		for (int i=0;i<n/2;i++) {
			if ( (inp[i] == '0' && inp[n-1-i] == '1') || (inp[i] == '1' && inp[n-1-i] == '0') ) {
				x++;
			}
			else break;
		}
		
		cout<<n-x*2<<endl;
	}
}		