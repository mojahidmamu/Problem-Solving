#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count[26] = {0};
    for (char c : s)
    {
        count[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        while (count[i]--)
        {
            cout << char(i + 'a');
        }
    }
    cout << endl;

    return 0;
}
