#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;

    bool found = false;
    while (ss >> word)
    {
        if (word == "Jessica")
        {
            found = true;
        }
    }

    if (found == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
