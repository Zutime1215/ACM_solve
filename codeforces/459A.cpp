#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if (a==c && b!=d)
        cout<<a+abs(d-b)<<" "<<b<<" "<<a+abs(d-b)<<" "<<d;
    else if (b==d && a!=c)
        cout<<a<<" "<<b+abs(c-a)<<" "<<c<<" "<<b+abs(c-a);
    else if (abs(a-c) == abs(b-d))
        cout<<a<<" "<<d<<" "<<c<<" "<<b;
    else
        cout<<-1;
}
