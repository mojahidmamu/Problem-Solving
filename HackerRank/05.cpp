#include <bits/stdc++.h>
using namespace std;

#define ll long long

// Author: Abdullah all Mojahid

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    ll X;
    cin >> N >> X;

    vector<long long> AtoB(N), BtoA(N);
    long long maxSame = 0;
    for (int i = 0; i < N; i++)
    {
        long long u, v;
        cin >> u >> v;
        AtoB[i] = (u <= X ? u : -1);
        BtoA[i] = (v <= X ? v : -1);
        if (u <= X)
            maxSame = max(maxSame, u);
        if (v <= X)
            maxSame = max(maxSame, v);
    }

    long long maxChoco = maxSame;

    // Find best different-route combination
    long long bestA = -1, bestA_idx = -1;
    long long bestB = -1, bestB_idx = -1;

    for (int i = 0; i < N; i++)
    {
        if (AtoB[i] > bestA)
        {
            bestA = AtoB[i];
            bestA_idx = i;
        }
        if (BtoA[i] > bestB)
        {
            bestB = BtoA[i];
            bestB_idx = i;
        }
    }

    if (bestA != -1 && bestB != -1)
    {
        if (bestA_idx != bestB_idx)
            maxChoco = max(maxChoco, bestA + bestB);
        else
        {
            // try second best alternatives
            long long secondBestA = -1, secondBestB = -1;
            for (int i = 0; i < N; i++)
            {
                if (i != bestB_idx)
                    secondBestA = max(secondBestA, AtoB[i]);
                if (i != bestA_idx)
                    secondBestB = max(secondBestB, BtoA[i]);
            }
            maxChoco = max({maxChoco, (secondBestA != -1 ? secondBestA + bestB : 0),
                            (secondBestB != -1 ? secondBestB + bestA : 0)});
        }
    }

    cout << maxChoco << "\n";

    return 0;
}
