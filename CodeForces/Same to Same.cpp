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
    Node *head1 = NULL;
    Node *tail1 = NULL;
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
            insert_at_tail(head1, tail1, val);
        }
    }
    //
    Node *head2 = NULL;
    Node *tail2 = NULL;
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
            insert_at_tail(head2, tail2, val);
        }
    }
    return 0;
}
