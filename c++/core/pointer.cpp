#include <iostream>
using namespace std;

void inc(int* a){
    // cout<<" => "<<a<<endl;
    cout<<" => "<<*a<<endl;
    *a = *a + 5;
}

int main(){
    cout<<"\n ** har har mahadev (pointer)** \n ";

    int arr[6] = { 11 , 112 ,13 , 14 , 15 , 16};
    
    // function use to access 
    int num = 5;
    inc(&num);
    cout<<"after inc => " <<num<<endl;

    cout<<arr<<endl;
    cout<<*arr<<endl;
    cout<<*(arr + 1)<<endl;
    cout<<*(arr) + 1<<endl;
    cout<<"ok fine"<<endl;
    return 0;
}