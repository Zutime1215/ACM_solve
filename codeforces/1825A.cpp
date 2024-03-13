#include <bits/stdc++.h>
using namespace std;
 
int main () {
    int t; cin>>t;
    while(t--) {
        string s; cin>>s;
 
        int x=1;
        for(int i=1; i<s.size(); i++) {
            if(s[i-1] != s[i]) {
                x=0;
                break;
            }
        }
 
        if(x==1) cout<<-1<<endl;
        else cout<<(s.size()-1)<<endl;
    }
 
    return 0;
}