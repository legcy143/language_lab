// what is ambiguty ??
/**
 * ans - >
   In object-oriented programming (OOP), ambiguity can refer to a situation where there is uncertainty or lack of clarity about which method or attribute should be used when dealing with objects
*/

#include <iostream>
using namespace std;

class A
{
protected:
    string i = " -> i A";

public:
    show()
    {
        cout << "from A class " << this->i << endl;
    }
};
class B : public A
{
protected:
//    virtual  string i = " -> i B";

public:
    show()
    {
        cout << "from B class " << this->i << endl;
    }
};
class C : public A, public B
{
// protected:
//     string i = " -> i C";

public:
    show()
    {
        cout << "from C class " << this->i << endl;
    }
};

int main()
{
    std::cout << "har har mahadev ~ambiguty case in oop \n";
    // A a1;
    // a1.show();

    // B b1;
    // b1.A::show();
    // b1.show();

    C c1;
    c1.show();
}