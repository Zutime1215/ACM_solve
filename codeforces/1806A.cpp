#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a,b , c,d, x;
	cin>>t;
	while(t--) {
		x=0;
		cin>>a>>b>>c>>d;

		if (b>d) x=-1;
		else if (b==d && a<c) x=-1;
		else {
			if (b==d) x += (a-c);
			else {
				x += d-b;
				a += x;
				if (a>=c) x += (a-c);
				else x =-1;
			}
		}
		cout<<x<<endl;	
	}
}	