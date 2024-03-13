#include <iostream>
using namespace std;

void m() {
	for (int i=0;i<n-1;i++) {
		if (arr[i]*arr[i+1]==0) {continue;}
		else if (arr[i]%2 + arr[i+1]%2 != 1) {
			arr[i] = arr[i]*arr[i+1];
			arr[i+1] = 0;
			x++;
		}
	}

	for (int i=0;i<n;i++) {
		if 
		if (arr[i]%2 == 0) odd_ch(i+1);
		else { even_ch(i+1) }
	}
}

void even_ch(int p) {
	if (p%2 == 0) odd_ch(p+1);
	else{}
}

void odd_ch(int p) {
	if (arr[p]%2 != 0) 
}

int main() {
	int t,n,x=0; cin >> t;
	while(t--) {
		cin >> n;
		int arr[n];
		for (int i=0;i<n;i++) {
			cin >> arr[i];
		}

		
		cout << x << endl;
	}
}