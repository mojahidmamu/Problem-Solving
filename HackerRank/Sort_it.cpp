#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student l, Student r)
{
    if (l.math_marks + l.eng_marks > r.math_marks + r.eng_marks)
    {
        return true;
    }
    else if (l.math_marks + l.eng_marks == r.math_marks + r.eng_marks)
    {
        if (l.id < r.id)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].section >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;
    }
    
    sort(arr, arr + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].section << " " << arr[i].id << " " << arr[i].math_marks << " " << arr[i].eng_marks << endl;
    }

    return 0;
}
