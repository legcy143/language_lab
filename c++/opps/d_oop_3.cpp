#include <iostream>

class m1
{
public:
    int a = 101;
};

int main()
{
    std::cout << "har har mahadev ~  dynamic oop\n";
    // static allocation of m1 class
    m1 m1s;
    std::cout <<"static "<<m1s.a<<"\n";


    // dynmic allocation of class m1 class
    m1 *m1a = new m1();
    std::cout <<"dynamic "<<m1a->a;
}