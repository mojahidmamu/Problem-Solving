#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int time = (n * (n + 1)) / 2 - (m * (m + 1)) / 2;
        cout << time << endl;
    }
}
