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
private:
    Node *start;

public:
    SLL();
    void insertAtStart(int);
    void printSLL();
};
SLL::SLL()
{
    start = NULL;
}
void SLL::insertAtStart(int value)
{
    Node *n = new Node(value);
    if (start != NULL)
    {
        n->next = start;
    }
    start = n;
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
    for (int i = 0; i < 5; i++)
    {
        s.insertAtStart(arr[i]);
    }
    s.printSLL();
    return 0;
}