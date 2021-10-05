// Reverse a Linked List

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
};

node* head;

// Recursive Function to reverse the Linked list.

void reverse(node* p)
{
    if (p->next == NULL)
    {
        head = p;
        return;
    }

    reverse(p->next);
    node* q = p->next;
    q->next = p;
    p->next = NULL;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n; // Number of nodes wanted in the linked list
    cin >> n;

    int num = n - 1;

    head = new node();
    node* temp = head;
    cin >> head->data;

    while (num--)
    {
        node* new_node = new node();
        cin >> new_node->data;
        temp->next = new_node;
        new_node->next = NULL;
        temp = temp->next;
    }

    reverse(head); // Calling the reverse function
    node* p = head;

    // Printing the reversed linked list.

    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }

    return 0;
}