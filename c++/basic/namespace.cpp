#include <iostream>

int a = 567;
namespace name
{
    void call()
    {
        std::cout << "hii there "<<a;
    }
}


int main()
{
    std::cout << "har har mahadev  ~ namespace\n";
    name::call();
    return 0;
}