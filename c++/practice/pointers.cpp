#include <iostream>

class A{
    
}


int main(){
    int a = 45;

    std::cout<<&a <<"\n";
    std::cout<<&(*(&a))<<"\n";
    std::cout<<*(&(*(&a)));
}