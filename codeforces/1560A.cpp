#include<iostream>
using namespace std;

int main() {
	int array[1010];
	int x = 0;

	for (int i=1;i<1667;i++) {
		if (i%3==0 && i%10 != 3) {
			array[x] == i;
			x++;
		}
	}

	cout << array << endl;
	int t,k;
	cin >> t;
	while (t--) {
		cin >> k;
		cout << array[k+1] <<endl;
	}
}