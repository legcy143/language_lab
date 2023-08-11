#include <iostream>
#include <vector>
using namespace std;

bool primeNum(int x, int y = 0)
{
    for (int i = x; i > 0; i--)
    {
        if(x%i == 0){
            cout<<x%i;
            cout<<i<<" "<< x<< " ." <<endl;
        }
    }
    
    bool isPrime = false;
    return isPrime;
}


int main()
{
cout<<4%12;
    cout << "\n*** har har mahadev *** \n\n\n";
    // program for finding primce number between two numbers;

    int a = 3;
    int b = 100;
    bool v1 = primeNum(a);
    cout << "\nis prime => " << v1 << endl;

    cout << "\n\n . ending .\n";
    return 0;
}