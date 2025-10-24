#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    set<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        s.insert(val);
    }

    int Q;
    cin >> Q;
    while (Q--)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            int x;
            cin >> x;
            s.insert(x);
            cout << *s.begin() << endl;
        }
        else if (cmd == 1)
        {
            cout << *s.begin() << endl;
        }
        else if (cmd == 2)
        {
            /* code */
        }
    }

    return 0;
}
