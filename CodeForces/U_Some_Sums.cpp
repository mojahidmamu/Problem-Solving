#include <bits/stdc++.h>
using namespace std;

int digit_sum(int x)
{
    int s = 0;
    while (x > 0)
    {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int N, A, B;
    cin >> N >> A >> B;

    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        if (A <= digit_sum(i) && digit_sum(i) <= B)
        {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}
