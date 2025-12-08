#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long n;
    cin >> n;

    long long count = 0;
    long long sum = 0;
    for (long long i = 1;; i++)
    {
        if (sum + i <= n)
        {
            sum += i;
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count << "\n";
    // ---- end of your code ----

    return 0;
}
