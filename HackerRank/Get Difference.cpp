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
        return;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
};

int max_value(Node *head)
{
    int max_val = head->val;
    Node *tmp = head->next;
    while (tmp != NULL)
    {
        if (tmp->val > max_val)
        {
            max_val = tmp->val;
            tmp = tmp->next;
        }
        else
        {
            tmp = tmp->next;
        }
    }
}

int min_value(Node *head)
{
    int min_val = head->val;
    Node *tmp = head->next;
    while (tmp != NULL)
    {
        if (tmp->val < min_val)
        {
            min_val = tmp->val;
            tmp = tmp->next;
        }
        else
        {
            tmp = tmp->next;
        }
    }
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
            insert_at_tail(head, tail, val);
        }
    }

    int max = max_value(head);
    int min = min_value(head);
    cout << max - min << endl;

    return 0;
}
