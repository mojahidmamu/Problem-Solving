#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int zero = n / 2;
        int one = n - zero;

        for (int i = 0; i < zero; i++)
        {
            cout << "0";
        }
        for (int i = 0; i < one; i++)
        {
            cout << "1";
        }
        cout << endl;

        
    }

    return 0;
}
