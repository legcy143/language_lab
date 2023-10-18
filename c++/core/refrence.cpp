#include <iostream>
using namespace std;

void update(int& n){
    n++;
}

// refrence variable is like variable with two names 

int main(){
    std::cout<<"har har mahadev  ~refrence variable\n";

    int a = 10;
    int b = 15;
    int& j = a;
    j++;
    j = b;
    b++;
    cout<<"value of a = "<<a <<" and j = "<<j<<endl;
    cout<<"value of b = "<<b<<endl;
    // cout<<"addres of a = "<<&a <<" and j = "<<&j<<endl;
    // cout<<" ** after update function ** \n";
    // update(j); // a or j pass any variable
    // cout<<"value of a = "<<a <<" and j = "<<j<<endl;

    // with array
    int a5 = 5;
    int arr[a5] = {1 , 2 , 3};
    cout<<arr[6]<<endl;
    // int& arr2 = arr;
    cout<<arr;
}