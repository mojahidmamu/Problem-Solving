#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    while (true)
    {
        cin >> n >> m;
        if (n <= 0 || m <= 0)
        {
            break;
        }

        int sum = 0;
        int start = min(n, m);
        int end = max(n, m);

        for (int i = start; i <= end; i++)
        {
            sum += i;
            cout << i << " ";
        }

        cout << "sum =" << sum << endl;
    }

    return 0;
}
