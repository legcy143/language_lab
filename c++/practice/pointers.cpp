#include <iostream>

class A{
    
};


int main(){
    int a = 45;
    bool ab = true;
    std::cout<<sizeof(ab)<<"\n";

    std::cout<<&a <<"\n";
    std::cout<<&(*(&a))<<"\n";
    std::cout<<*(&(*(&a)));
}