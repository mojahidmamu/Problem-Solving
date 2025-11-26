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

void insret_at_tail(Node *head, Node *tail, int val)
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
        newNode = tail;
    }
}

int mx(Node *head)
{
    Node *tmp = head;
    int maximum = head->val;
    while (tmp != NULL)
    {
        if (tmp->val > maximum)
        {
            maximum = tmp->val;
            tmp = tmp->next;
        }
        else
        {
            tmp = tmp->next;
        }
    }
    return maximum;
}

int mn(Node *head)
{
    Node *tmp = head;
    int minimum = head->val;
    while (tmp != NULL)
    {
        if (tmp->val < minimum)
        {
            minimum = tmp->val;
            tmp = tmp->next;
        }
        else
        {
            tmp = tmp->next;
        }
    }
    return minimum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
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
            insret_at_tail(head, tail, val);
        }
    }

    int max_value = mx(head);
    int min_value = mn(head);

    cout << max_value - min_value << endl;

    return 0;
}
