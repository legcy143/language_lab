#include <iostream>

class m1
{
public:
    int p1 = 101;

private:
    int p2 = 102;

protected:
    int p3 = 103;

public:
    printm1()
    {
        std::cout << " le p1 => " << p3;
    }
};

// class classname : acces specifier classname(the class that was inherited)
// by default acces specifier is public
class m2 : m1
{
public:
    printm2()
    {
        std::cout << " print m2 => " << p1;
    }
};

int main()
{
    std::cout << "har har mahadev  ~acess specifier exp\n";
    m1 o1;
    // protected p3 is directly not accesable
    // std::cout << "p1 " << o1.p1 << std::endl;
    // o1.printm1();
    m2 o2;
    o2.printm2();
}

// main diffrence is protected is not acces directly but it is used by inherted child so if we want to make some variable that was only acces or changed by other class using inheritance we can use protected