#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, fd, ld; cin >> t;
    while(t--) {
        cin >> n;
        fd = n/10000;
        ld = n - ((n/10)*10);

        //cout << ld << endl;
        cout << "Sum = " << fd+ld << endl;
    }
}
