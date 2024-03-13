#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,temp;
	unsigned long long multi,multi1;
	cin>>t;
	while(t--) {
		temp=1;
		multi1=1;
		cin>>n;
		int arr[n];
		for (int i=0;i<n;i++) {
			cin>>arr[i];
		}

		for (int k=0;k<n-1;k++) {
			multi=1;
			for (int l=k+1;l<n;l++) {
				multi = multi * arr[l];
			}
			multi1 = multi1 * arr[k];
			if (multi1==multi) {
				cout<<k+1<<endl;
				temp=0;
				break;
			}
		}
		if (temp) cout<<-1<<endl;
	}
}	