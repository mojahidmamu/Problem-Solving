#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    int count = 0;
    while (ss >> word)
    {
        if (word == "...")
        {
            continue;
        }

        count++;
    }
    cout << count << endl;

    return 0;
}
