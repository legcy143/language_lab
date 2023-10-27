#include <iostream>

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int value)
    {
        this->data = value;
        this->prev = nullptr;
        this->next = nullptr;
    }

    ~Node()
    {
        std::cout << "destruct Node\n";
    }
};

void addToHead(Node* &head, int value)
{
    Node *temp = new Node(value);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void printAllNodeFromHead(Node *&head)
{
    std::cout << "printing all node from head\n";
    Node *temp = head;
    while (temp != nullptr)
    {
        std::cout <<temp->data<<" ";
        temp = temp->next;
    }
    std::cout<<" \n";
}

void printAllNodeFromTail(Node* &tail){
    std::cout << "printing all node from tail\n";
    Node* temp = tail;
        while (temp != nullptr)
    {
        std::cout <<temp->data<<" ";
        temp = temp->prev;
    }
    std::cout<<" \n";


}

int main()
{
    std::cout << "har har mahadev  ~ doubly linklist \n\n";

    Node *node1 = new Node(12);
    Node *head = node1;
    Node *tail = node1;
    addToHead(head, 15);
    printAllNodeFromHead(head);
    printAllNodeFromTail(tail);

    std::cout << "\n\n program finished !\n";
}