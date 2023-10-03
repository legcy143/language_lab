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
    bitset<8> f1 , f2 , f3 , f4;

};


int main()
{
    cout<<sizeof(abc);
    return 0;
}
