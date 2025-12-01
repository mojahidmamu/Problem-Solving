#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    while (n > 0)
    {
        int first_digit = n;
        while (first_digit >= 10)
        {
            first_digit /= 10;
        }

        if (first_digit % 2 == 0)
        {
            cout << "EVEN" << endl;
            break;
        }
        else
        {
            cout << "ODD" << endl;
            break;
        }
       n =  n / 1000;
    }

    return 0;
}
