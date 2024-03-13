#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a,b,c,x;
	cin>>t;
	while(t--) {
		x=0;
		cin>>a>>b>>c;
		
		cout <<ceil((abs(a-b)/2.0)/c) <<endl;
	}
}