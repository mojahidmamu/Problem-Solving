#include <bits/stdc++.h>
using namespace std;

void printDigit(int n)
{
    if (n < 10)
    {
        cout << n;
        return;
    }
    else
    {
        printDigit(n / 10);
        cout << " " <<  n % 10;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        printDigit(n);
        cout << endl;
    }

    return 0;
}
