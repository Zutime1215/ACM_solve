#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, a,b,c, x; cin>>t;
	while(t--) {
		x=0;
		cin>>a>>b>>c;
		while(!(c<a || c<	b)) {
			if (a>=b) b+=a;
			else a+=b;
			x++;
		}
		cout<<x<<endl;
	}
}