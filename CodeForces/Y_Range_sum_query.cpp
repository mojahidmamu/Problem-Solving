#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n, q;
    cin >> n >> q;
    vector<long long> arr(n + 1), prefix(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        prefix[i] = prefix[i -1] + arr[i];
    }

    while (q--)
    {
        int L, R;
        cin >> L >> R;

        long long sum = prefix[R] - prefix[L - 1];

        cout << sum << endl;
    }

    return 0;
}
