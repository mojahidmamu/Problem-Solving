#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool Compare(Student a, Student b)
{
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    priority_queue<Student, vector<Student>, Compare> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Student s;
        cin >> s.name >> s.roll >> s.marks;
        pq.push({s.name, s.roll, s.marks});
    }

    int Q;
    cin >> Q;
    while (Q--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            Student s;
            cin >> s.name >> s.roll >> s.marks;
            pq.push(s);
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks;
            }
        }
        else if (cmd == 1)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks;
            }
        }
        else if (cmd == 2)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
