#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x; cin>>t;
	while(t--) {
		x = 1;
		cin>>n;
		char arr[2][n];
		for (int i=0;i<2;i++) {
			for (int j=0;j<n;j++) {
				cin>>arr[i][j];
				if (arr[i][j] == 'B') arr[i][j]='G';
			}
		}

		for (int i=0;i<n;i++){
			if (arr[0][i] != arr[1][i]) {
				x=0;
				break;
			}
		}

		if (x) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}