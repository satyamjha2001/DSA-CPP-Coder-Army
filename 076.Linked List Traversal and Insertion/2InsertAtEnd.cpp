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
    void insertAtLast(int);
    void printSLL();
};
SLL::SLL()
{
    start = NULL;
}

void SLL::insertAtLast(int value)
{
    Node *n = new Node(value);
    if (start == NULL)
    {
        start = n;
    }
    else
    {
        Node *temp = start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }
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
        s.insertAtLast(arr[i]);
    }
    s.printSLL();
    return 0;
}