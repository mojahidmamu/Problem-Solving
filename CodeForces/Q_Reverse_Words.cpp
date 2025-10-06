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
    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        cout << word << " ";
    }

    return 0;
}
