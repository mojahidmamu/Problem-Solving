#include <bits/stdc++.h>
using namespace std;

bool isLucky(int x)
{
    if (x == 0)
    {
        return false;
    }

    while (x > 0)
    {
        int d = x % 10;
        if (d != 4 && d != 7)
        {
            return false;
        }
        x /= 10;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int A, B;
    cin >> A >> B;

    bool isFound = false;
    for (int i = A; i <= B; i++)
    {
        if (isLucky(i))
        {
            cout << i << " ";
            isFound = true;
        }
    }

    if (!isFound)
    {
        cout << -1 << endl;
    }

    return 0;
}
