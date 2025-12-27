#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = s.size();

    for (int i = 0; i < n / 2; i++)
    {
        int j = n - 1 - i;
        if (s[i] != '?' && s[j] != '?')
        {
            if (s[i] != s[j])
            {
                cout << -1 << endl;
                return 0;
            }
        }
        else if (s[i] == '?' && s[j] == '?')
        {
            s[i] = s[j] = 'a';
        }
        else if (s[i] == '?')
        {
            s[i] = s[j];
        }
        else
        {
            s[j] = s[i];
        }
    }

    if (n % 2 == 1 && s[n / 2] == '?')
    {
        s[n / 2] = 'a';
        
    }

    cout << s << endl;

    return 0;
}
