#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a + b - c == d) || (a + b * c == d) || (a - b + c == d) || (a - b * c == d) || (a * b + c == d) || (a * b - c == d))
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }

    return 0;
}

/*
+, -, *
+, *, -
-, +, *
-, *, +
*, +, -
*, -, +

*/