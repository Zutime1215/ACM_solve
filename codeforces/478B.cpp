#include<bits/stdc++.h>
using namespace std;

long long int combination2(long long int n) {
    return (n*(n-1))/2;
}

int main() {
    long long int n,m;
    long long int max, mini;
    cin>>n>>m;

    max = combination2(n-m+1);
    
    if (m==1)
        cout<<max<<" "<<max;
    
    else {
        mini = combination2(n/m) * (m-n%m) + combination2(n/m + 1) * (n%m);
        cout<<mini<<" "<<max;
    } 
}
