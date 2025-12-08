#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int rA, cA;
    cin >> rA >> cA;
    int A[rA][cA];
    for (int i = 0; i < rA; i++)
    {
        for (int j = 0; j < cA; j++)
        {
            cin >> A[i][j];
        }
    }

    //
    int rB, cB;
    cin >> rB >> cB;
    int B[rB][cB];
    for (int i = 0; i < rB; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            cin >> B[i][j];
        }
    }

    int C[rA][cB];
    for (int i = 0; i < rA; i++) {
        for (int j = 0; j < cB; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
