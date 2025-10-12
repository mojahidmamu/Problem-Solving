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
     cout << "R -> ";
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
    cout << "L -> ";
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << "\n";
}

// 
void insert_at_tail(Node *head, Node *&tail, int &size, int pos, int val)
{
    if(pos > size)
    {
        cout <<"Invalid\n";
        return;
    }
     
}

int main() {
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
