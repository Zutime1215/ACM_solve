#include<bits/stdc++.h>
using namespace std;

int main() {
	int t,x; cin>>t;
	while(t--) {
		int n; cin>>n;
		int odd=0, even=0;
		for (int i=0;i<2*n;i++) {
			cin>>x;
			if (x%2==0) even++;
			else odd++;
		}
		if (odd==even) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}