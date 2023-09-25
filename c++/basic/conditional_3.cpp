#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "enter your age : ";
    cin >> age;

    // if (age >= 18)
    // { // false
    //     cout << "you are eligble for vote";
    // }
    // else
    // {
    //     cout << "you are not eligble for vote";
    // }

    switch(age){
        case 18: //age == 18
        cout<<"you can vote";

        case 19:
        cout<<"you can also vote";

        case 190:
        cout<<" tu zinda hai abhi tak";
    }



}