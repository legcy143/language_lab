#include <iostream>
using namespace std;

void inc(int *a)
{
    // cout<<" => "<<a<<endl;
    cout << " => " << *a << endl;
    *a = *a + 5;
}

int main()
{
    cout << "\n ** har har mahadev (pointer)** \n ";

    int arr[6] = {11, 112, 13, 14, 15, 16};

    // function use to access
    // int num = 5;
    // inc(&num);
    // cout<<"after inc => " <<num<<endl;

    // cout<<arr<<endl;
    // cout<<*arr<<endl;
    // cout<<*(arr + 1)<<endl;
    // cout<<*(arr) + 1<<endl;
    // cout<<"ok fine"<<endl;

    // int a2 = 45;
    // int *a3 = &a2;
    // cout << &a2 << "\n";
    // cout << a3 << "\n";
    // cout << *a3 << "\n";
    // cout << &a3;

    // weard how const pointer char store this😢
    const char* myStr = "Hello, World!";
    cout<<myStr;

    return 0;
}