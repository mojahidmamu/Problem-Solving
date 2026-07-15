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
        int N, P;
        cin >> N >> P;
        string S;
        cin >> S;

        int leftFlip = 0, rightFlip = 0;

        for (int i = 0; i < P; i++)
        {
            if (S[i] == 'R')
            {
                leftFlip++;
            }
        }

        for (int i = P - 1; i < N; i++)
        {
            if (S[i] == 'L')
            {
                rightFlip++;
            }
        }

        cout << min(leftFlip, rightFlip) << '\n';
    }

    return 0;
}
