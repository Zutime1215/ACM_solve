#define testcase(t)          int t;cin>>t;while(t--)

#include<bits/stdc++.h>
using namespace std;

int main() {
	testcase(t) {
		int k = INT_MAX;
		int num_traps; cin>>num_traps;
		for (int i=0;i<num_traps;i++) {
			int trap_index, sec; cin>>trap_index>>sec;
			int l = trap_index + (sec-1)/2;
			if (l<k) k = l;
		}
		cout<<k<<endl;
	}
}