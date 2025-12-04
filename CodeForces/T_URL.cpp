#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    string s;
    getline(cin, s);
    //   The parameters of the URL: username, pwd, profile, role and key.
    int pos = s.find('?');
    string params = s.substr(pos + 1);

    map<string, string> mp;
    string token;
    stringstream ss(params);

    while (getline(ss, token, '&'))
    {
        int eq = token.find('=');
        string key = token.substr(0, eq);
        string value = token.substr(eq + 1);
        mp[key] = value;
    }

    
    cout << "username: " << mp["username"] << "\n";
    cout << "pwd: " << mp["pwd"] << "\n";
    cout << "profile: " << mp["profile"] << "\n";
    cout << "role: " << mp["role"] << "\n";
    cout << "key: " << mp["key"] << "\n";

    return 0;
}
