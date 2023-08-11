#include <iostream>

void pr(int* ac){
    ++*ac;
    std::cout<<"in pr function "<<*ac<<std::endl;
}

int main (){
    std::cout<<"hello worlds \n";

    int a = 56;
    int* b = &a;
    pr(&a);

    std::cout<<a <<" and b "<<b<<std::endl;

}