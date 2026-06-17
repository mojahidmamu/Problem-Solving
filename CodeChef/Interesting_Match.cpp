#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int x, y;
    cin >> x >> y;
    int deff = abs(x - y);
    if (deff > 2)
    {
        cout << "Boring" << endl;
    }
    else if (deff <= 2 )
    {
        cout << "Interesting" << endl;
    }

    return 0;
}
