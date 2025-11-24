#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int &val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        while (true)
        {
            int val;
            cin >> val;
            if (val == -1)
            {
                break;
            }
            else
            {
                insert_at_tail(head, tail, val);
            }
        }

        int x;
        cin >> x;

        int idx = 0;
        Node *tmp = head;
        while (tmp != NULL)
        {
            if (tmp->val == x)
            {
                cout << idx << endl;
                break;
            }
            else
            {
                tmp = tmp->next;
                idx++;
            }
        }
        if (tmp == NULL)
        {
            cout << -1 << endl;
        }
        }

    return 0;
}
