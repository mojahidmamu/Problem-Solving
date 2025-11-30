#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    int x = 1, y = 2, z = 3;
    for (int i = 1; i <= n; i++)
    {
        cout << x << " " << y << " " << z << " " << "PUM" << endl;
        x += 4;
        y += 4;
        z += 4;
    }

    return 0;
}
