#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int n, k;
    cin >> n >> k;

    int majority = (n / 2) + 1;
    int additional = majority - k;

    // If already has majority
    if (additional < 0)
    {
        additional = 0;
    }

    cout << additional << endl;
    return 0;
}
