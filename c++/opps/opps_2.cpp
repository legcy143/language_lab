#include <iostream>
using namespace std;

class complex
{
    int a, b;

protected:
    int c = 67;

public:
    void update(int a)
    {
        c = a;
    };
    void show()
    {
        cout << "value of c => " << c<<endl;
    };
    void operator+(){
        cout<<"hii operater overload";
    }
};

int main()
{
    complex c1;
    c1.update(3);
    c1.show();
    return 0;
 }