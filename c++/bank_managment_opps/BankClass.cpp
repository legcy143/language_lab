#include <bits\stdc++.h>
using namespace std;

// create account means create new object in array 
// create account process : enter name in constructer
//  create account methods :
//   >> account holder name
//   >> unique id of that account holder off max length 6

// after this some features are 
//   >> Add amount 
//   >> Check amount
//   >> Withdraw amount
//   >> Deposite amount
//   >> share amount and create transaction id (optional)

struct user
{
    string username = "default",
    int _id =  999999,  // max length 6
    int password = 999999,
    int amount = 0
};


class legcyBank{
    vector<user>;
    public:
    static int GenrateUid(){
        return 11111
    };
    boolean createACC(){
        cout<<"cretaing";
    }
    boolean login(){
        cout<<"login";
    }
    string withdraw(){
        cout<<"withdraw";
    } 
    string deposite(){
        cout<<"credit";
    }
    string viewbalance(){
        cout<<"your balanace;
    }



};
