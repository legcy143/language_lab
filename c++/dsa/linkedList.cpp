#include <iostream>

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

// insertion on head
void insertAtHead(Node *&head, int value)
{
    Node *temp = new Node(value);
    temp->next = head;
    head = temp;
}

// insertion on tail
void insertAtTail(Node *&tail, int value)
{
    Node *temp = new Node(value);
    tail->next = temp;
    tail = temp;
}

// transverse through linklist
void printAllNode(Node *head)
{
    std::cout << "Print all data\n";
    Node *temp = head;
    int count = 0;
    while (temp != nullptr)
    {
        // understanding of how node save memory of another
        ++count;
        std::cout << count << ". At -> " << temp << " Data-> " << temp->data << " Next-> " << temp->next << "\n";
        temp = temp->next;
    }
    std::cout << "\n";
}

// insertion at position
void insertAt(int pos, int value, Node *&head, Node *&tail)
{
    if (pos == 1)
    {
        insertAtHead(head, value);
        return;
    }
    Node *temp = new Node(value);
    Node *headPtr = head;
    int count = 1;
    while (count < pos - 1)
    {
        ++count;
        headPtr = headPtr->next;
        if (headPtr->next == nullptr)
        {
            insertAtTail(tail, value);
            return;
        }
    }
    temp->next = headPtr->next;
    headPtr->next = temp;
}

void removeOf()
{
}

int main()
{

    std::cout << "har har mahadev  ~linkedlist\n";
    Node *node1 = new Node(12);
    Node *head = node1;
    Node *tail = node1;
    std::cout << head << " head and tail -" << tail << std::endl;
    insertAtHead(head, 15);
    insertAtHead(head, 16);
    insertAtHead(head, 17);
    insertAtTail(tail, 20);
    printAllNode(head);
    std::cout << head << " head and tail -" << tail << std::endl;
    insertAt(1, 51, head, tail);
    insertAt(2, 52, head, tail);
    insertAt(10, 53, head, tail);
    printAllNode(head);
    std::cout << head << " head and tail -" << tail << std::endl;

    // delete all node after finished program
    delete node1;
    head = nullptr;
    tail = nullptr;
    std::cout << "\nfinished !\n";
    return 0;
}