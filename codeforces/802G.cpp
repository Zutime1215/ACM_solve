#include<bits/stdc++.h>
using namespace std;

int main() {
	string s; cin>>s;
	string x = "heidi";
	int y=0;
	for (int i=0;i<s.size();i++) {
		if (y==5) {break;}
		if (s[i]==x[y]) {y++;}
	}
	if (y==5) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}