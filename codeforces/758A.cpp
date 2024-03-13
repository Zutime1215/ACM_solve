#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a=0; cin >> n;
	int arr[n];
	for (int i=0;i<n;i++) {
		cin >> arr[i];
	}

	sort(arr, arr+n);
	for (int i=0;i<n-1;i++) {
		a = a + ( arr[n-1]-arr[i] ); 
	}

	cout << a;
}