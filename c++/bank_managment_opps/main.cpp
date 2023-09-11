// project : create bank management using opps in c++

#include <bits\stdc++.h>
// #include "BankClass.cpp"
#include <ctime>
using namespace std;

class legcyBank
{
private:
    long int accNum;
    string accHolderName;
    int pin;

public:
    struct user
    {
        int num;
        string nam;
        int pass;
    };
    legcyBank(int a = 0000, string u = "user", int p = 0000)
    {
        accNum = a;
        accHolderName = u;
        pin = p;
    }
    int checkPin(int p)
    {
        cout << " ok " << p << " and pin => " << pin << " pin ";
        // return ((p == pin) ? 1 : 0);
    }
    void checkAccDetail()
    {
        cout << "accholder detail \n Account number = " << accNum << "";
    }
};

int main()
{
    // optional for reading instruction
    ifstream instructionText("instruction.txt");
    string line;
    string instruction;
    while (getline(instructionText, line))
    {
        instruction += line + " \n";
    }
    cout << " *** welcom to state bank of legcy *** \n";
    srand(time(nullptr));
    int r = rand();
    int r1 = rand();
    cout << r << "\n";
    cout << r1;

    return 0;
}