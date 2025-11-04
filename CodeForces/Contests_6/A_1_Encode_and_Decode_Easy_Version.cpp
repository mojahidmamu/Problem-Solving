#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    string s;
    cin >> s;

    if (s == "first")
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        string encoded = "";
        for (int i = 0; i < n; i++)
        {
            encoded += ('a' + arr[i] - 1);
        }
        cout << encoded << "\n";
    }
    else if (s == "second")
    {
        string encoded;
        cin >> encoded;
        int n = encoded.size();
        cout << n << " ";

        for (char c : encoded)
        {
            cout << (c - 'a' + 1) << " ";
        }
        cout << "\n";
    }

    return 0;
}
