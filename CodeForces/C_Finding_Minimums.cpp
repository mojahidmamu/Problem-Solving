#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int N, K;
    cin >> N >> K;
    long long arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i += K)
    {
        int end = min(i + K, N);
        long long mn = LLONG_MAX;
        for (int j = i; j < end; j++)
        {
            mn = min(mn, arr[j]);
        }
        cout << mn << " ";
    }
    cout << endl;

    return 0;
}
