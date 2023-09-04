#include <iostream>
#include <vector>

int main(){
    std::cout<<"har har mahadev\n";
    // vector in stl;
    // std::vector<datatype> variable-name = {values at 0 , value at 1}
    std::cout<<"vector\n";
    std::vector <int> vec = {22 , 1 , 25 , 21 , 18};
    vec.push_back(12);
    vec.push_back(14);
    vec.pop_back();
    
    std::cout<<vec.capacity()<<"\n";
    std::cout<<vec.size()<<"\n";
    std::cout<<vec.at(0)<<"\n";
    std::cout<<vec[1]<<"\n";
    // and method goes ....

    std::cout<<"\n let's see \n";




    
    return 0;
}