#include <iostream>

class Node
{
public:
    int val;
    Node *next;
    Node(int value)
    {
        this->val = value;
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
    std::cout << "Print all val\n";
    Node *temp = head;
    int count = 0;
    while (temp != nullptr)
    {
        // understanding of how node save memory of another
        ++count;
        std::cout << count << ". At -> " << temp << " val-> " << temp->val << " Next-> " << temp->next << "\n";
        temp = temp->next;
    }
    std::cout << "\n";
}

Node *AddTwoNumberS(Node *l1, Node *l2)
{
    std::cout << "sum of two number \n";
    int carry = 0;
    int sum = l1->val + l2->val + carry;
    if (sum / 10)
    {
        sum = sum % 10;
    }
    carry = sum / 10;
    Node *ansNode = new Node(sum);
    Node *ansTailNode = ansNode;
    l1 = l1->next;
    l2 = l2->next;

    while (l1 != nullptr && l2 != nullptr)
    {
        std::cout << "l1 val - " << l1->next << " , l2 val - " << l2->next << "\n";
        sum = l1->val + l2->val + carry;
        if (sum / 10)
        {
            sum = sum % 10;
        }
        carry = sum / 10;
        insertAtTail(ansTailNode, sum);

        l1 = l1->next;
        l2 = l2->next;
    }
    while (l1 != nullptr || l2 != nullptr || carry != 0)
    {
        if (l1 != nullptr)
        {
            sum = l1->val + carry;
            if (sum / 10)
            {
                sum = sum % 10;
            }
            carry = sum / 10;
            insertAtTail(ansTailNode, sum);
            l1 = l1->next;
        }
        else if (l2 != nullptr)
        {
            sum = l2->val + carry;
            if (sum / 10)
            {
                sum = sum % 10;
            }
            carry = sum / 10;
            insertAtTail(ansTailNode, sum);
            l2 = l2->next;
        }
        else if (carry)
        {
            insertAtTail(ansTailNode, carry);
            carry = 0;
        }
    }

    // printing for self satifaction
    printAllNode(ansNode);
}
Node *AddTwoNumber(Node *l1, Node *l2)
{
    std::cout << "sum of two number \n";
    int carry = 0;
    int sum = 0;
    Node *ansNode = new Node(0);
    Node *ansTailNode = ansNode;

    while (l1 || l2 || carry )
    {
        std::string type = {(l1 != nullptr || l2 != nullptr) ? "True" : "False"};
        std::cout << type << " ";
        sum = carry;
        carry = 0;
        if (l1)
        {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2)
        {
            sum += l2->val;
            l2 = l2->next;
        }
        if (sum / 10)
        {
            carry = sum / 10;
            sum = sum % 10;
        }
        std::cout << " sum " << sum << " \n";
        insertAtTail(ansTailNode, sum);
    }
    // printing for self satifaction
    printAllNode(ansNode->next);
    delete ansNode;
}

int main()
{

    std::cout << "har har mahadev  ~singly linkedlist\n";
    Node *l1 = new Node(9);
    Node *l2 = new Node(9);
    // Node *l1 = new Node(2);
    // Node *l2 = new Node(5);
    Node *tail1 = l1;
    Node *tail2 = l2;
    // insertAtTail(tail1, 4);
    // insertAtTail(tail1, 3);
    // insertAtTail(tail2, 6);
    // insertAtTail(tail2, 4);
    for(int i = 1 ; i<7 ; i++){
        insertAtTail(tail1, 9);
        if(i < 4){
        insertAtTail(tail2, 9);
        }
    }
    printAllNode(l1);
    printAllNode(l2);

    // linked list problem
    AddTwoNumber(l1, l2);

    std::cout << "\nfinished !\n";
    return 0;
}