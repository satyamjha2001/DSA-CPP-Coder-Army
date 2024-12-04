#include <iostream>
using namespace std;

class Node
{
public:
    int item;
    Node *next;
    Node(int data)
    {
        item = data;
        next = NULL;
    }
};
class SLL
{
public:
    Node *start;
    SLL();
    Node *createLinkedList(int a[], int index, int size);
    void printSLL();
};
SLL::SLL()
{
    start = NULL;
}
Node *SLL::createLinkedList(int a[], int index, int size)
{
    if (index == size)
        return NULL;
    Node *n = new Node(a[index]);
    n->next = createLinkedList(a, index + 1, size);
    return n;
}
void SLL::printSLL()
{
    Node *temp = start;
    while (temp != NULL)
    {
        cout << temp->item << " ";
        temp = temp->next;
    }
}

int main()
{
    SLL s;
    int arr[] = {1, 2, 3, 4, 5};
    s.start = s.createLinkedList(arr, 0, 5);
    s.printSLL();
    return 0;
}