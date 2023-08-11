#include <iostream>

char toLowerCase(char *a)
{
    if (*a + 1 >= 66 && *a + 1 <= 91)
    {
        *a = *a + 32;
    }
}
char toUpperCase(char *a)
{
    if (*a + 1 >= 98 && *a + 1 <= 123)
    {
        *a = *a - 32;
    }
}

int main()
{
    std::cout<<"\n testing converter \n";

    char a = 'Z';
    std::cout <<"default value   => "<<a<<"\n";
    toLowerCase(&a);
    std::cout <<"after lowercase => "<<a<<"\n";
    toUpperCase(&a);
    std::cout <<"after uppercase => "<<a<<"\n";

    return 0;
}