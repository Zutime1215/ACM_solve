#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,p,x,y,sum;
	cin>>t;
	while(t--) {
		sum = 0;
		y=1;
		x=0;
		cin>>n;
		int arr[n];
		for (int i=0;i<n;i++) {
			cin>>arr[i];
			sum = sum + arr[i];
		}
		sort(arr, n+arr);

		if (sum%2==0) cout<<x<<endl;
		else{
			for (int i=n-1;i>=0;i--) {
				if (arr[i]%2 != 0) {
					while(y) {
						sum = 0;
						p = arr[i]/2;
						arr[i] = p;
						x++;
						for (int i=0;i<n;i++) {
							sum = sum + arr[i];
						}
						if (sum%2!=0) y=1;
						else y=0;
					}
				}		
			}
			cout<<x<<endl;
		}

	}
}	