#include<iostream>

using namespace std;


class Node {
public:
    int data;
    Node *next;
};


Node *head = nullptr;


void insertNode(int number) {
    Node *node = new Node();

    node->data = number;
    node->next = head;

    head = node;
}


void display() {
    cout << "The list is: ";
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }


    Node *list = head;
    while (list != nullptr) {
        cout << list->data << " ";
        list = list->next;
    }
    cout << endl;
}


void deleteItem() {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }
    cout << head->data << " is removed." << endl;
    head = head->next;
}

int main() {

    insertNode(10);
    insertNode(20);
    insertNode(40);


    display();

    deleteItem();
    display();

    return 0;
}