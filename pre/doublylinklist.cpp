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
void printForward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void printBackWord(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
void insertedAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}
void insertedAtTail(Node *head, Node *&tail, int val)
{
    Node *temp = head;
    Node *newNode = new Node(val);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    tail = newNode;
}
void insertedAtAnyPos(Node *&head, int pos, int val)
{
    Node *temp = head;
    Node *newNode = new Node(val);

    for (int i = 1; i < pos; i++)
    {
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next->prev=newNode;
    temp->next=newNode;
    newNode->prev=temp;
}

void deleteAtHead(Node *&head,Node *&tail){
Node *deletedNode=head;
head=head->next;
if(head==NULL){
    tail=NULL;
    return;
}
head->prev=NULL;

delete deletedNode;
}
void deletedAtTail(Node *&tail){
Node *deleteNode=tail;
tail=tail->prev;
tail->next=NULL;
delete deleteNode;
}
void deleteAtAnyPos(Node*& head, Node*& tail, int pos) {
    if (head == NULL) return;

    
    if (pos == 1) {
        Node* deletedNode = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
  
        if (head == NULL) {
            tail = NULL;
        }
        delete deletedNode;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
   
        return;
    }

    Node* deletedNode = temp->next;
    temp->next = temp->next->next;

 
    if (temp->next != NULL) {
        temp->next->prev = temp;
    }

  
    if (deletedNode == tail) {
        tail = temp;
    }

    delete deletedNode;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(50);
    Node *tail = new Node(30);
    head->next = a;
    a->next = b;
    b->next = tail;
    a->prev = head;
    b->prev = a;
    tail->prev = b;
    // insertedAtHead(head, 100);
    // insertedAtHead(head, 100);
    // insertedAtTail(head, tail, 100);
    // insertedAtTail(head, tail, 1000);
    // insertedAtAnyPos(head, 2, 59);   
    // insertedAtAnyPos(head, 2, 69);
    // deleteAtHead(head,tail);
    // deleteAtHead(head,tail);
    deleteAtAnyPos(head,tail,2);
    deleteAtAnyPos(head,tail,2);
    // deletedAtTail(tail);
    printForward(head);
    printBackWord(tail);
    return 0;
}