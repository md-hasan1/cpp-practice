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

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int size1 = 0;
    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        size1 += 1;
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

    Node *head2 = NULL;
    Node *tail2 = NULL;
    int size2 = 0;
    while (1)
    {
        int val2;
        cin >> val2;
        if (val2 == -1)
        {
            break;
        }
        size2 += 1;
        Node *newNode2 = new Node(val2);
        if (head2 == NULL)
        {
            head2 = tail2 = newNode2;
        }
        else
        {
            tail2->next = newNode2;
            tail2 = newNode2;
        }
    }

    if (size2 == size1)
    {
        Node *temp = head;
        Node *temp2 = head2;
        int flags = 0;
        while (temp != NULL)
        {
            if (temp2->val != temp->val)
            {
              
                flags = 1;
                break;
            }
            temp = temp->next;
            temp2 = temp2->next;
        }
        if(flags){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}