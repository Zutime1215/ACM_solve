#include <bits/stdc++.h>
using namespace std;

int remaining(int start, int n, int *arr) {
	int sum=0;
	for (int i=start+1;i<n;i++) {
		sum += arr[i];
	}
	return sum;
}

int main() {
	int n, remain_sum, got_sum=0, x=0;
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++) {
		cin>>arr[i];
	}
	sort(arr, arr+n, greater<int>());
	for (int i=0;i<n;i++) {
		remain_sum = remaining(i, n, arr);
		got_sum += arr[i];
		x++;
		// cout<<got_sum<<" "<<remain_sum<<endl;
		if ( remain_sum < got_sum ) break;
	}
	cout<<x<<endl;
}	