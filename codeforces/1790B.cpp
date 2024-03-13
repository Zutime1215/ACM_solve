#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,s,r;
	cin>>t;
	while(t--) {
		int j=2;
		cin>>n>>s>>r;
		int max = s-r;
		cout << max << " ";

		while(n-j+1) {
			if (r-max >= n-j) {
				cout<<max<<" ";
				r = r-max;
				j++;
			}
			else {
				max--;
			}
		}
		cout<<endl;
		
	}

}