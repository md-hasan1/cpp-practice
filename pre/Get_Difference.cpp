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

void insert_at_tail(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);
    if (head == NULL)
    {

        head = tail = newNode;
    }
    else
    {

        tail->next = newNode;
        tail = newNode;
    }
}


int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int max = INT_MIN;
    int min = INT_MAX;
    while (1)
    {
        int val;
        cin >> val;

        if (val == -1)
        {
            break;
        }

        insert_at_tail(head, tail, val);
    }

    Node *temp = head;
    while (temp != NULL)
    {
        if (max < temp->val)
        {
            max = temp->val;
        }
        if (min > temp->val)
        {
            min= temp->val;
        }
        temp = temp->next;
    }

    int diff = max - min;
    cout << diff<< endl;

    return 0;
}