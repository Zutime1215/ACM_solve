#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y,k,t;
	cin>>t;
	while(t--) {
		cin>>x>>y>>k;
		if (x>=y) cout << x <<endl;
		else{
			if (x+k == y) cout << x+k<<endl;
			else if (x+k > y) cout << y <<endl; 
			else{
				int dif = y-(x+k);
				cout<<x+k+dif*2<<endl;
			}
		}
	}
}	