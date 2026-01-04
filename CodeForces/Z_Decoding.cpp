#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;
    string res;
    for (int i = 0; i < n;)
    {
        if (s[i] == '0')
        {
            res += '0';
            i++;
        }
        else if (s[i] == '1')
        {
            if (s[i + 1] == '0')
            {
                res += '1';
                i += 2;
            }
            else
            {
                int num = (s[i + 1] - '0') * 10 + (s[i + 2] - '0');
                res += char('a' + num - 1);
                i += 3;
            }
        }
    }
    cout << res << endl;

    return 0;
}
