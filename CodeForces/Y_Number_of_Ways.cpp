#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int count(int current, int end)
{
    if (current == end)
    {
        return 1;
    }

    if (current > end)
    {
        return 0;
    }

    return count(current + 1, end) + count(current + 2, end) + count(current + 3, end);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, e;
    cin >> s >> e;
    cout << count(s, e) << endl;
    return 0;
}
