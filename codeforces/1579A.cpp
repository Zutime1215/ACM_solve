#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, a,b,c; cin>>t;
	while(t--) {
		a=0;b=0;c=0;
		string strn; cin>>strn;
		int len_str = strn.length();
		for (int i=0;i<len_str;i++) {
			if ( strn[i]=='A' ) a++;
			else if ( strn[i]=='B' ) b++;
			else if ( strn[i]=='C' ) c++;
		}
		if (a+c == b) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

	}
}