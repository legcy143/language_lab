#include <iostream>
using namespace std;

class Animal
{
    int leg = 4;

protected:
    int nose = 1;

public:
    void showLeg()
    {
        cout << leg;
    }
    void showNose()
    {
        cout << nose;
    }
};

class Hero
{

    int hp = 5;

public:
    void udpateHp(int ep)
    {
        hp = ep;
    };
    void showHp()
    {
        cout << hp << endl;
    };
    int show()
    {
        cout << hp << endl;
    }
};

int main()
{
    cout << " ** har har mahadev  ** \n";
    Hero h1;
    Hero h2;
    Hero h3;
    h1.udpateHp(22);
    h1.showHp();
    h2.showHp();
    h1.show();
    h3.show();

    return 0;
}