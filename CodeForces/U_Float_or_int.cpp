#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    double n;
    cin >> n;

    long long intPart = (long long)n;
    double decimalPart = n - intPart;
    if (decimalPart == 0)
    {
        cout << "int " << intPart << endl;
    }
    else
    {
        cout << "float " << intPart << " " << fixed << setprecision(3) << decimalPart << endl;
    }

    return 0;
}
