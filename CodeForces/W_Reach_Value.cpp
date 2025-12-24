#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int canReach(long long  current, long long  N)
{
    if (current == N)
    {
        return true;
    }
    if (current > N)
    {
        return false;
    }
    else
    {
        return canReach(current * 10, N) || canReach(current * 20, N);
    }
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long  N;
        cin >> N;
        if (canReach(1, N))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
