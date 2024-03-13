#include<bits/stdc++.h>
using namespace std;

int main() {
	int s, n; cin>>s>>n;
	pair<int, int> p[1000];
	bool win = true;
	for (int i=0;i<n;i++) {
		cin>>p[i].first>>p[i].second;
	}
	sort(p, p+n);
	for (int i=0;i<n;i++) {
		if (s <= p[i].first) {
			win = false;
			break;
		}
		else {
			s+=p[i].second;
		}
	}

	if (win) {
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
}