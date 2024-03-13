#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, i, j;
	string pi = "314159265358979323846264338327";
	cin>>t;
	while(t--) {
		i=0;
		j=1;
		string inp;
		cin>>inp;
		while(j) {
			if (i==30) break;
			else if ( inp[i] == pi[i] ) {i++;}
			else {j=0;}
		}
		cout << i <<endl;
	}
}