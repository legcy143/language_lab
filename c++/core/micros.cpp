#include <iostream>

#define a 12
#define log(x) std::cout<<x<<"\n"

int main(){
    std::cout<<"har har mahadev ~ macro in c++\n";
    int abc = 123;
    log(abc);
    log(a);
    std::cout<<a;
}