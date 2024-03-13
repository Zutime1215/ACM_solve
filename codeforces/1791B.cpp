#include <bits/stdc++.h>
using namespace std;

int check(int p, int q) {
	if (p==1 && q==1) {
		cout<<"YES"<<endl;
		return 1;
	}
	else
		return 0;
}

int main() {
	int t, n, a, b, x; cin >> t;
	string inp;
	while (t--) {
		a=0;b=0;x=0;
		cin>>n;
		cin>>inp;
		for (int i=0;i<n;i++) {
			if (inp[i]=='U') {
				a+=1;
				if (check(a,b)) break;
				else x++;
			}
			else if (inp[i]=='D') {
				a-=1;
				if (check(a,b)) break;
				else x++;
			}
			else if (inp[i]=='R') {
				b+=1;
				if (check(a,b)) break;
				else x++;
			}
			else if (inp[i]=='L') {
				b-=1;
				if (check(a,b)) break;
				else x++;
			}
		}
		if (x==n) cout<<"NO"<<endl;
	}

}		