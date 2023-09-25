#include <iostream>
using namespace std;

int main()
{
    // taking marks and give them sum off all marks
    // let total marks in one subject be 100; so total marks 300;
    
    int phy = 0 , chem = 0 , math = 0;

    cout << "Enter your marks in math : ";
    cin >> math;
    cout << "Enter your marks in physic : ";
    cin >> phy;
    cout << "Enter your marks in chemistry : ";
    cin >> chem;

    cout << "your total marks is = " << math + phy + chem;

    return 0;
}