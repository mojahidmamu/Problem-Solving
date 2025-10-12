#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// print forward:
void print_forward(Node *head)
{
    cout << "L -> ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << "\n";
}

//  print backward:
void print_backward(Node *tail)
{
    cout << "R -> ";
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << "\n";
}

//
void insert_at_tail(Node *&head, Node *&tail, int &size, int pos, int val)
{
    if (pos > size)
    {
        cout << "Invalid\n";
        return;
    }
    Node *newNode = new Node(val);
    if (pos == 0)
    {
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    else if (pos == size)
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    else // insert at any position: in the middle
    {
        Node *tmp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        newNode->prev = tmp;
        tmp->next->prev = newNode;
        tmp->next = newNode;
    }
    size++;
    print_forward(head);
    print_backward(tail);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---

    Node *head = NULL;
    Node *tail = NULL;
    int size = 0;

    int q;
    cin >> q;
    while (q--)
    {
        int X, V;
        cin >> X >> V;
        insert_at_tail(head, tail, size, X, V);
    }

    return 0;
}
