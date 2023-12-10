#include <iostream>

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        this->data = value;
        this->next = nullptr;
    }
    ~Node()
    {
        std::cout << "deleted \n";
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

void removeFromPosition(int pos, Node *&head, Node *&tail)
{
    Node *curr = head;
    if (pos == 1)
    {
        head = curr->next;
        delete curr;
        return;
    }
    Node *prev = nullptr;
    int count = 1;
    while (count < pos)
    {
        prev = curr;
        curr = curr->next;
        ++count;
        // std::cout << prev << " " << curr << " \n";
        if (curr == nullptr)
        {
            std::cout << "***  No data found at " << pos << " position ***\n";
            return;
        }
    }
    prev->next = curr->next;
    if (curr->next == nullptr)
    {
        tail = prev;
    }
    curr->next = nullptr;
    delete curr;
}

void reverseLinkedList(Node *&head)
{
    Node *prevPtr = nullptr;
    Node *currPtr = head;
    Node *nextPtr = nullptr;

    while (currPtr != nullptr)
    {
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;
        prevPtr = currPtr;
        currPtr = nextPtr;
    }

    head = prevPtr;
};

void reverseLinkedListAndSort(Node *&head)
{
    Node *sortedList = nullptr;
    Node *curr = head;
    while (curr != nullptr)
    {
        Node *nextNode = curr->next;
        if (sortedList == nullptr || curr->data < sortedList->data)
        {
            curr->next = sortedList;
            sortedList = curr;
        }
        else
        {
            Node *temp = sortedList;
            while (temp->next != nullptr && temp->next->data < curr->data)
            {
                temp = temp->next;
            }
            curr->next = temp->next;
            temp->next = curr;
        }
        curr = nextNode;
    }
    head = sortedList;
}



int main()
{

    std::cout << "har har mahadev  ~singly linkedlist\n";
    Node *node1 = new Node(12);
    Node *head = node1;
    Node *tail = node1;
    std::cout << head << " head and tail -" << tail << std::endl;

    // insert at head
    insertAtHead(head, 15);
    insertAtHead(head, 16);
    insertAtHead(head, 17);

    // insert at tail
    insertAtTail(tail, 20);

    // insert or add at postition
    insertAt(1, 51, head, tail);
    insertAt(2, 52, head, tail);
    insertAt(10, 53, head, tail);

    // traverse to all node or display
    printAllNode(head);

    // remove
    removeFromPosition(5, head, tail);
    removeFromPosition(15, head, tail);
    removeFromPosition(7, head, tail);
    printAllNode(head);
    std::cout << head << " head and tail -" << tail << std::endl;

    std::cout << "Reversed linkedlist and sort\n";
    reverseLinkedListAndSort(head);
    printAllNode(head);

    // delete all node after finished program
    delete node1;
    head = nullptr;
    tail = nullptr;
    std::cout << "\nfinished !\n";
    return 0;
}