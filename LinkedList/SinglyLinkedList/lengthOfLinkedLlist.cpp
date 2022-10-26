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


int count(node*& head){
    int count=0;
    node* current = head;
    while(current){
        count++;
        current = current -> next;
        
    }
}
int main(){
    node *head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    cout << "Length of linkedlist \n";
    cout<<lengthIter(head);
    return 0;
}