#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned long long t, n, m, a, b;
	unsigned long long day1_etw_bar, day1_baki, day1_tk, day2_tk;
	cin>>t;
	while(t--) {
		cin>>a>>b>>n>>m;

		if (a>b) {
			day1_etw_bar = n/(m+1);
			day1_baki = n-(day1_etw_bar*(m+1));
			day1_tk = a*day1_etw_bar*(m);
			day2_tk = day1_baki*b;
			cout << day1_tk+day2_tk << endl;
		}
		else {
			cout << a*n <<endl;
		}

	}	
}