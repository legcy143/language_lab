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
    //  ---as per my knwoledge  i think because of memory leakage we have not to use pointer of char without const other wise it affect any other memory in search of \o litreal --may be 🙂
    const char* myStr = "Hello, World!";
    // cout<<myStr;

    // pointer of pointer 
    int ptr1 = 10;
    int ptr11 = 15;
    int* ptr2 = &ptr1;
    int** ptr3 = &ptr2;
    // int ****** for pointer or pointer of pointer .. 
    // cout<<ptr2<<"\n";
    // cout<<ptr3<<"\n";
    // cout<<**ptr3<<"\n";

    // pointer variable change ?
    cout<<ptr1<<endl;
    (*ptr2)++;
    cout<<ptr1<<endl;

    cout<<ptr11<<endl;
    ptr2 = &ptr11;
    (*ptr2)++;
    cout<<ptr11<<endl;
    cout<<ptr1<<endl;

    return 0;
}