#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t,n;
	long long x;
	cin>>t;
	while(t--) {
		x=0;
		cin>>n;
		unsigned int a[n], b[n];

		for (int i=0;i<n;i++) {cin>>a[i];}
		for (int i=0;i<n;i++) {cin>>b[i];}

		unsigned int &min_can = *min_element(a, a + n);
		unsigned int &min_ora = *min_element(b, b + n);

		for (int i=0;i<n;i++) {

			if (a[i] > min_can && b[i] > min_ora) {
				int minu_a = a[i] - min_can;
				int minu_b = b[i] - min_ora;
				int y = abs(minu_a-minu_b);
			 	x = x + y;
			 	if (minu_a>minu_b) x+=(minu_a-y);
			 	else x+=(minu_b-y);
			}
			else if ( a[i] > min_can ) {
				x=x+a[i] - min_can; 
			}
			else if ( b[i] > min_ora ) {
				x=x+b[i] - min_ora; 
			}
		}
		cout<<x<<endl;
	}
}