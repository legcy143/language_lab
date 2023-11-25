#include <iostream>
using namespace std;

int main()
{
    int a = 34;

    // A - 34 33 34
    // U - 34 34 34 
    cout << a++ << " " << --a << " ";
    cout << a;
}