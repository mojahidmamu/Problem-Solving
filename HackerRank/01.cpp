#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;
    bool isPresent = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            isPresent = true;
            break;
        }
    }

    if (isPresent )
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
