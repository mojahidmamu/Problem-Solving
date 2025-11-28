#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long id;
    cin >> id;

    long long row = id / 4;
    long long pos = id % 4;
    int col;
    if (row % 2 == 0)
    {
        col = pos;
    }
    else
    {
        col = 3 - pos;
    }
    cout << row << " " << col << endl;
    return 0;
}
