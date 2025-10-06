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

    bool first = true;
    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        // cout << word << " ";
        if (!first)
            cout << " ";
        cout << word;
        first = false;
    }

    return 0;
}
