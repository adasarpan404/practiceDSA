#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void insertattail(node *&head, int val)
{
    node *newnode = new node(val);

    if (head == NULL)
    {
        head = newnode;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void insertafter(node *head, int key, int val)
{
    node *n = new node(val);
    if (key == head->data)
    {
        n->next = head->next;
        head->next = n;
        return;
    }

    node *temp = head;
    while (temp->data != key)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            return;
        }
    }
    n->next = temp->next;
    temp->next = n;
}

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    cout << "Initial linkedlist \n";
    print(head);
    insertAtHead(head, 4);
    cout << "After insertion at head \n";
    print(head);
    insertattail(head, 5);
    cout << "After insertion at tail \n";
    print(head);
    insertafter(head, 1, 6);
    cout << "After insertion after 1 \n";
    print(head);

    return 0;
}