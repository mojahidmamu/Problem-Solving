#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()

// Author: Abdullah all Mojahid

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        string S;
        cin >> S;

        int i = 0;
        while (i < N && S[i] != 'z')
        {
            i++;
        }

        while (i < N && S[i] == 'z')
        {
            S[i] = 'a';
            i++;
        }

        cout << S << '\n';
    }

    return 0;
}
