typedef long long            ll;
typedef long long int        lli;

#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl

#define MAX(arr)  *max_element(arr)
#define MIN(arr)  *min_element(arr)

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}
int lcm(int a, int b){
    return (a / gcd(a, b)) * b;
}

#define vec_s  vector<string>
#define vec_i  vector<int>
#define vec_ll vector<ll>      
#define vec_ld vector<ld> 

#define vpushE(x, v)      v.push_back(x)
#define vpushB(x, v)      v.insert(v.begin(), x)
#define vremoveE(v)       v.pop_back()
#define vremoveB(v)       v.erase(v.begin())
#define vreverse(v)       reverse(v.begin(), v.end())
#define vsort(v)          sort(v.begin(),v.end())

#define spush(x, s)       s.insert(x)
#define sremove(x)        s.erase(x)   

#define vsprint(i, v, ws)    for (auto i:v) {cout<<i<<ws;}
#define sz(v)                v.size()

#define regular_for(i, a)    for(int i=0; i<(a); i++)
#define array_in(i, a, arr)  int arr[a];for (int i=0;i<a;i++) {cin >> arr[i];}
#define array_out(i, a, arr) for (int i=0;i<a;i++) {cout<<arr[i]<<"\n";}
#define testcase(t)          int t;cin>>t;while(t--)

#include<bits/stdc++.h>
using namespace std;



int main() {
	// #ifndef a
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif

	int wire; cin>>wire;
	array_in(i, wire, birds)
	int shot; cin>>shot;
	while(shot--) {
		int wr, n; cin>>wr>>n;
		if (wr-2 < 0 ) {
			birds[wr] += (birds[wr-1]-n);
			birds[wr-1]=0;
		}
		else if (wr > wire-1) {
			birds[wr-2] += n-1;
			birds[wr-1]=0;
		}
		else{
			birds[wr-2] += n-1;
			birds[wr] += (birds[wr-1]-n);
			birds[wr-1]=0;
		}	
	}
	array_out(i, wire, birds)
	
}	