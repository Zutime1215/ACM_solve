#include<bits/stdc++.h>
using namespace std;

vector<string>spliter(string s, char ss) {
    string xx = ""; vector<string>parts;
    for(int i=0; i<s.size(); i++) {
        if (s[i] == ss) {parts.push_back(xx);xx="";}
        if (s[i]!= ss) xx += s[i];
        if (i==s.size()-1) parts.push_back(xx);
    }
    return parts;
}

int main() {
    int n, m;
    string a,b;
    string lec;
    vector<string>lecture;
    cin>>n>>m;
    map<string, string> mp;
    while(m--) {
        cin>>a>>b;
        mp[a]=b;
    }
    cin.ignore();
    getline(cin, lec);
    lecture = spliter(lec, ' ');

    for (int i=0;i<n;i++) {
        if ( lecture[i].size() > mp[lecture[i]].size() )
            cout<<mp[lecture[i]]<<" ";
        else 
            cout<<lecture[i]<<" ";
    }
}
