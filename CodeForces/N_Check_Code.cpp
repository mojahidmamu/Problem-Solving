#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int A, B;
    cin >> A >> B;
    string s;
    cin >> s;
    int pos = A + 1;

    if (s.size() != A + B + 1)
    {
        cout << "NO" << endl;
        return 0;
    }

    if (s[A] != '-')
    {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (i == A)
        {
            continue;
        }
        if (!isdigit(s[i]))
        {
            cout << "NO" << endl;
            break;
        }
    }

    cout << "YES" << endl;

    return 0;
}
