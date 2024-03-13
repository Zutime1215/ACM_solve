#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long long int x,y; 
    cin>>t;
    while(t--) {
        cin>>x>>y;
        if (x>=y*y && (x%2)==(y%2)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
