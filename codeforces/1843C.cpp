#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        uint64_t n, sum; cin>>n;
        sum = n;
        while(n) {
          sum+=n/2;
          n/=2;
        }
        cout<<sum<<endl;
    }
}