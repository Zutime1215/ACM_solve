#include <bits/stdc++.h>
using namespace std;

int main() {
	string inp; cin>>inp;
	int length = inp.length();
	int number = (length+1)/2;
	char arr[number];
	
	for (int i=0;i<length;i=i+2) {
		arr[(i/2)] = inp[i];
	}

	sort(arr, number+arr);

	for (int i=0;i<number;i++) {
		if (i==number-1) cout<<arr[i]<<endl;
		else cout<<arr[i]<<"+";
	}
}