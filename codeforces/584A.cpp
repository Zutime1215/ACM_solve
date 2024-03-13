#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
	int n,t,p,q; cin>>n>>t;
	p = pow(10, n-1);
	q = pow(10, n);
	// cout << p << q;
	for (int i=p;i<q;i++) {
		if (i%t==0) {
			cout << i << endl;
			break;
		}
		else if (i==q) { cout << -1 << endl; }
	}
}