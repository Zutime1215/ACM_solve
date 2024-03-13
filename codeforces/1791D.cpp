// Credit: https://www.youtube.com/watch?v=74gh6bV2vwM
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    string s;
    cin>>t;
    while(t--) {
        cin>>n;
        cin>>s;
        vector<int>pref(n,0), suff(n,0);
        set<char> ss;
        int ans = 0;
        for (int i=0;i<n;i++) {
            ss.insert(s[i]);
            pref[i] = ss.size();            
        }
        ss.clear();
        for (int i=n-1;i>-1;i--) {
            ss.insert(s[i]);
            suff[i] = ss.size();            
        }
        for (int i=0;i<n-1;i++) {
            ans = max(ans, pref[i]+suff[i+1]);            
        }

        cout<<ans<<endl;
    }
}
