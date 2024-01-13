#include <iostream>
using namespace std;

int bubbleSort(int *a, int n = 0)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n -i-1; j++)
        {
            cout << i << " " << j << "  ";
            // cout<<a[i]<< " "<<a[j]<<endl;
        }
        cout <<" e"<< endl;
    }
}

int main()
{
    std::cout << "har har mahadev ~ Bubble sort \n";

    int a[5] = {5, 4, 3, 2, 1};
    bubbleSort(a, 5);

    return 0;
}