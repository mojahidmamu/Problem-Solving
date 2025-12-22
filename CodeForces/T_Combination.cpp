#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int nCr(int N, int R)
{
    if (R > N)
    {
        return 0;
    }
    if (R == 0 || R == N)
    {
        return 1;
    }
    return nCr(N - 1, R - 1) + nCr(N - 1, R);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, R;
    cin >> N >> R;

    cout << nCr(N, R) << endl;

    return 0;
}
