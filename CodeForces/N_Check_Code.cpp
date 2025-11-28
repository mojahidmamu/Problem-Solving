#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B;
    cin >> A >> B;
    string S;
    cin >> S;

    if ((int)S.size() != A + B + 1)
    {
        cout << "No\n";
        return 0;
    }

   
    if (S[A] != '-')
    {
        cout << "No\n";
        return 0;
    }

   
    for (int i = 0; i < (int)S.size(); i++)
    {
        if (i == A)
            continue; 
        if (!isdigit(S[i]))
        {
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";
    return 0;
}
