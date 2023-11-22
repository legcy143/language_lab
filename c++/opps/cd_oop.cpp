#include <iostream>
using namespace std;

class Show{
    public:
    Show(){
        cout<<"constureter first\n";
    }
    show(int a){
        cout<<"overload 2nd\n";
    }
    show(int a , int b){
        cout<<"overload 3rd\n";
    }
};

int main(){
    cout<<"constructer , destructer and overload \n";
    Show s1;
    s1.show(23 , 23);
}