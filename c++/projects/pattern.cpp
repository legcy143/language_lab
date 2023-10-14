#include <iostream>

void triangle()
{
    int height = 5;
    for (int i = 0; i < height; i++)
    {
        for (int j = i; j < height; j++)
        {
            std::cout<< ((height - j > 0 ) ? '*' : ' ');
            // std::cout << j - height << " <- " << i<<j;
        }
        std::cout << '\n';
    }
}

int main()
{
    triangle();
}