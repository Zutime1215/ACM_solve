#define MAX(arr)  *max_element(arr)
#define MIN(arr)  *min_element(arr)

#define foor(i,a) for(int i=0; i<(a); i++)
#define inn(arr, i) cin>>arr[i]

#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl

#include<bits/stdc++.h>
using namespace std;

int main() {

	int t, n, x;
	cin>>t;
	while(t--) {
		x=0;
		cin>>n; int arr[n];
		foor(i, n){
			inn(arr, i);
			x+=arr[i];
		}

		if (x%2==0) no;
		else yes;
	}
}

