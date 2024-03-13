#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int a, e, ans=0;
       int n; cin>>n;
        int arr[n];
        for (int i=0;i<n;i++) {
            cin>>arr[i];
        }
        
        for (int i=0;i<n;i++) {
            if (arr[i] == 1) {
                a = i; break;
            }
        }
        
        for (int i=n-1;i>=0;i--) {
            if (arr[i] == 1) {
                e = i; break;
            }
        }
        
        for (int i=a;i<e;i++) {
            if (arr[i] == 0) {
                ans++;
            }
        }
        cout<<ans<<endl;
        
    }
}