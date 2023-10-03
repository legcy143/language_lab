#include <iostream>

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(Node *&  , int val)
{
    std::cout << "insert at tail";
};

int main()
{
    std::cout << "har har mahadev  ~linkedlist\n";

    insertAtTail();
    Node n1(2);
    // std::cout<<n1.next;

    return 0;
}