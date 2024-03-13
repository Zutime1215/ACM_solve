#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, y; 
	char x, arr[] = { 'c', 'o', 'd', 'e', 'f', 'r', 's' };
	cin>>t;
	while(t--) {
		y=0;
		cin>>x;
		for (int i=0;i<7;i++) {
			if ( (x == arr[i]) ) {cout<<"YES"<<endl;y=1;break;}
		}
		if (y==0) cout<<"NO"<<endl;
	}
}