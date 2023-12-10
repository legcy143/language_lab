#include <iostream>
using namespace std;

int rec(int i){
    static int countStatic = 0;
    int countLocal = 0;
    countStatic++;
    countLocal++;
    cout<<"\ncnts -> "<<countStatic<<" "<<countLocal;
    if(i <= 0){
        return 0;
    }
    static int e = 0;
    if(i%2==0){
        e++;
        cout<<" e "<<e;
    };
    cout<<"        i -> "<<i<<"  ";
    int p = rec(i-2);
    cout<<"\n        ->A  p "<<i<<" ";
    int np = rec(i-1);
    cout<<"\n        ->A np "<<i<<" ";
    return max(p , np);
}


int main()
{
    int a = rec(4);
    cout<<"\n Ans => "<<a;
}
