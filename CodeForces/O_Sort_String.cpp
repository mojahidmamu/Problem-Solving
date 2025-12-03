#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    
    int count[26] = {0};
    char ch ;
    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        count[ch - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        while (count[i]--)
        {
            cout << char(i + 'a');
        }
    }
    cout << endl;

    return 0;
}
