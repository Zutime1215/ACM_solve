#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n,k,x,y; cin >> t;
	while (t--) {
		cin>>n>>k>>x;
		if (k==x) {
			y = (k)*(n-k);
			for (int i=0;i<k-1;i++) {
				y = y+i;
			}
			cout << y << endl;

		}
		else if (k-1>x) cout<<-1<<endl;
		else {
			y = x*(n-k);
			for (int i=0;i<k;i++) {
				y = y+i;
			}
			if (y<-1) cout<<-1<<endl;
			else cout << y << endl; 
		}
	}
}