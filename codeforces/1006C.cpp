typedef long long            ll;
typedef long double          ld;
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

#define vec_i  vector<int>
#define vec_ll vector<ll>      
#define vec_ld vector<ld>      
#define vec_s  vector<string>

#define vpush(x, v)       v.push_back(x)
#define vremove(v)        v.pop_back()
#define vsort(v)          sort(v.begin(),v.end())

#define spush(x, s)       s.insert(x)
#define sremove(x)        s.erase(x)

#define vsprint(i, v, ws)    for (auto i:v) {cout<<i<<ws;}
#define sz(v)                v.size()

#define regular_for(i, a)    for(int i=0; i<(a); i++)
#define array_in(i, a, arr, type)  type arr[a];for (int i=0;i<a;i++) {cin >> arr[i];}
#define array_out(i, a, arr) for (int i=0;i<a;i++) {cout<<arr[i]<<" ";}
#define testcase(t)          int t;cin>>t;while(t--)


#include<bits/stdc++.h>
using namespace std;

int main() {
	/*#ifndef a
	  freopen("input.txt", "r", stdin);
	  freopen("output.txt", "w", stdout);
	#endif*/

	int n, x,y; cin>>n;
	lli max=0, a, b;
	array_in(i, n, arr, lli);

	x=0; y=n-1;
	a = arr[x]; b=arr[y];
	
	while(1) {
		if (x>=y) break;
		if (a==b) {max=a;x++;a+=arr[x];}
		if (a>b) {
			y--;
			b+=arr[y];
		}
		else if (b>a) {
			x++;
			a+=arr[x];
		}	 
	}
	cout<<max<<endl;
}