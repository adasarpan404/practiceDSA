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

int RandomNumber(int min, int max)
{
    float r = (float)rand() / (float)RAND_MAX;
    return (int)(min + r * (max - min));
}
int lengthIter(node *&head)
{
    int count = 0;
    node *current = head;
    while (current)
    {
        count++;
        current = current->next;
    }
    return count;
}
int main()
{
    node *head = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < 2 * n + RandomNumber(0, n); i++)
    {
        insertAtHead(head, i);
    }

    cout << "Length of linkedlist \n";
    cout << lengthIter(head);
    return 0;
}