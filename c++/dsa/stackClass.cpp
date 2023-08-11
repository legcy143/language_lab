#include <iostream>
#include <vector>

class Stack
{
private:
    std::vector<int> stackVector;

public:
    // push element to stack
    void push(int a)
    {
        stackVector.push_back(a);
        std::cout << "push succesfully ^_^\n";
    };

    // pop last element from stack
    void pop()
    {
        stackVector.pop_back();
        std::cout << "pop last elemement succesfully ^_~\n";
    }

    // print stack
    int printStack()
    {
        if (stackVector.empty() == true)
        {
            std::cout << "stack is empty :)\n";
            return 0;
        }
        std::cout << "[ ";
        for (auto i = stackVector.begin(); i != stackVector.end(); ++i)
            std::cout << *i << " ";
        std::cout << "]";
    }
    // get value by index
    int at(int a)
    {
        if (a < stackVector.size())
        {
            std::cout << stackVector.at(a) << "\n";
        }
        else
        {
            std::cout << "no record found :( \n ~ note : position start from 0 \n";
        }
    }
    void size()
    {
        std::cout << stackVector.size() << std::endl;
    };
    int peak()
    {
        std::cout << "peak value => " << stackVector.at(stackVector.size() - 1) << std::endl;
    }
};

int main()
{
    std::cout << "har har mahadev ~dsa stack\n";
    std::vector<int> vec = {1};

    Stack stack1;
    stack1.push(13);
    stack1.push(131);
    stack1.peak();
    stack1.at(0);
    stack1.size();
    stack1.printStack();

    return 0;
}