#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, hour=0, burnt=0; cin>>a>>b;
    hour = a;
    while(a>=b) {
       hour+=(a/b);
       a = (a/b) + (a%b);
    }
    cout<<hour<<endl;
}
