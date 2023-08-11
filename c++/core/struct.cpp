#include <iostream>
using namespace std;

struct User
{
    string name;
    int rollNumber = 250;
    int marks[5];
    public:
    void print(){
        cout<<"print me"<<name<<endl;
    };
};

int main()
{
    cout << "** har har mahadev (struct) **\n";
    User p = {
        "prince 1st",
    };
    User prince = {
        "prince",
        150,
        {12, 14, 15, 12, 11},
    };
    cout << p.rollNumber << endl;
    p.print();
    cout<<sizeof(p)<<endl;
    cout<<sizeof(prince);

    return 0;
}