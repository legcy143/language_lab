#include <iostream>
using namespace std;

class A
{
protected:
    int var1 = 34;

public:
    void printV1()
    {
        cout << "v1 = " << var1 << endl;
    }
    friend void fPrint(A);
};

void fPrint(A a1)
{
    cout << a1.var1;
}

int main()
{
    std::cout << "har har mahadev ~ friend function oops \n";
    A a1;

    // a1.printV1();
    fprintf(a1);

    return 0;
}