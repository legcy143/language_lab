#include <iostream>
using namespace std;


int main()
{
    int a = 45;
    int* abc = &a;
    int& b = a;
    a++;
    cout<<*abc;

    return 0;
}