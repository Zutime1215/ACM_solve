#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t,n,x,y;
	cin>>t;

	while(t--) {
		x=0;y=0;
		cin>>n;
		int arr[n];
		for (int i=0;i<n;i++) {cin>>arr[i];}

		for (int i=0;i<n;i++) {
			if (arr[i]==1 && x>0) {x=0;}
			else if (arr[i]==0) {
				x++;
				if (y<x) {y=x;}
			}

		}
		cout<<y<<endl;
	}

}	