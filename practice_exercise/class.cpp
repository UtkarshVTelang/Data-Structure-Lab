#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
};

int main()
{
    node* first = new node();
    node* second = new node();
    node* third = new node();

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = nullptr;

    node* head = first;

    node* temp = head;
    cout << "[";
    while(temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "]";

    return 0;
}