#include <bits/stdc++.h>
// #include <math.h>
using namespace std;

int main() {
	int t, w,d,h, a,b,f,g;
	int p,q,r,s;
	cin>>t;
	while(t--) {
		cin>>w>>d>>h;
		cin>>a>>b>>f>>g;
		p = abs(a-f)+b+h+g;
		q = abs(b-g)+a+h+f;
		r = abs(b-g)+2*w+h-a-f;
		s = abs(a-f)+2*d+h-b-g;
		int arr[4]={ p,q,r,s };
		sort(arr, arr+4);
		cout<< arr[0] << endl;
	}
}	