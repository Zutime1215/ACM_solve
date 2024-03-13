#include<bits/stdc++.h>
using namespace std;
 
int adder(int n) {
    return (n*(n+1))/2;
}
 
int main() {
    int n; cin>>n;
    int h = 0;
    while(1){
        n -= adder(h+1);
        if (n>=0) h++;
        else break;
    }
    cout<<h<<endl;
}