#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

/*** Print Element of linklist ***/
void print(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element of : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

/***
 * Inset Element in linklist
 * Insert at the begining
 * Insert in between
 * Insert at the end
 * Insert after a Node
 */
struct Node *insertAtBeginning(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;

    return ptr;
}

struct Node *insertInBetween(struct Node *head, int index, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;

    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;

    ptr->data = data;

    while (p != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    return head;
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 160;
    second->next = NULL;

    head = insertAtBeginning(head, 10);
    // print(head);

    head = insertInBetween(head, 1, 150);
    // print(head);
    head = insertAtEnd(head, 16);
    print(head);
}