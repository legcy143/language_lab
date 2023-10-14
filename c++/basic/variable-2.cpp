#include <iostream>
using namespace std;
#include <bitset>

//  types of variable
// -- global varibale
// -- local variable
// -- static variable

int c = 78;

struct abc
{
    bitset<8> f1, f2, f3, f4;
};

int main()
{
    long int a1 = 12;
    float a2 = 12.1;
    double a3 = 12.1;
    bool a4 = 1;
    cout << sizeof(a1) << endl;
    cout << sizeof(a2) << endl;
    cout << sizeof(a3) << endl;
    cout << sizeof(a4) << endl;
    return 0;
}
