#include <iostream>

class first
{

    class inner
    {
    public:
        int v2 = 202;
    };

    int v1 = 101;
    inner i1;

public:
    printv1()
    {
        std::cout << "var 1 = " << i1.v2;
    }
};

int main()
{
    std::cout << "\nhiit there\n";
    first f1;
    
    f1.printv1();

    return 0;
}