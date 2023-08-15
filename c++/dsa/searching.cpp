#include <iostream>


int linearSearch(){
    std::cout<<"linear search \n";
};

int binarySearch(){
    std::cout<<"binary search \n";
};


int main(){
    int arr[10] = {7 , 2 , 4 , 3 , 1 , 17 , 20 , 11 , 33, 8};
    std::cout<<"har har mahadev  ~searching.cpp\n";
    int binaryRes = binarySearch();
    int linearRes = linearSearch();
}