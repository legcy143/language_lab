#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "MyClass constructor called" << endl;
    }

    ~MyClass() {
        cout << "MyClass destructor called" << endl;
    }
};

int main() {
    const int ARRAY_SIZE = 2;
    MyClass myArray[ARRAY_SIZE] = {1 , 2};

    return 0;
}