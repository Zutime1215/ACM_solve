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
    int n,m;
    map<string, string> servers;
    vector<string> server;
    cin>>n>>m;
    string sin_server;
    cin.ignore();
    for (int i=0;i<n;i++) {
        getline(cin, sin_server);
        sin_server += ';';
        server = spliter(sin_server, ' ');
        servers[server[1]] = server[0];
    }

    for (int i=0;i<m;i++) {
        getline(cin, sin_server);
        server = spliter(sin_server, ' ');
        cout<<sin_server<<" #"<<servers[server[1]]<<endl;
    }
}
