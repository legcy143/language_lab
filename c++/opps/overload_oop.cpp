#include <iostream>
using namespace std;


class Num{
    private:
    int a = 0 , b = 0;
    public:
    Num(int a , int b){
        this->a = a;
        this->b = b;
    }
    void show(){
        cout<<"a => "<<a<<"  b => "<<b<<endl;
    }
    Num &operator++(){
        a++;
        b++;
        cout<<"from ++ "<<this->a<<endl;
        return *this;
    }
    friend void hello(Num &n1);

};

void hello(Num &a1){
    a1.a = 12;
    cout<<a1.a;
}

int main(){
    cout<<"har har mahadev ~ friend functiona and overload \n";
    Num n1(2,4);
    n1.show();
    ++n1;
    n1.show();
    hello(n1);
    n1.show();
}